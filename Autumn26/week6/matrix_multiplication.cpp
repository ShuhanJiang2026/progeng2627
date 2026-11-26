#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
std::vector<double> line_to_vector(std::string s){

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    // we can use a stringstream as if it were a stream object 
    // such as std::cout or something of type
    // std::ifstream or std::ofstream

    ss << s;
    while(ss >> tmp){
        // std::stod converts from string to double
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    // std::getline reads a whole line as a string
    // by default the separator is the newline
    // rather than any whitespace
    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}

std::vector <double>column_reader(int num ,const std::vector<std::vector<double>>& m){
    std::vector<double> column;
    for (int i =0; i <m.size(); i++){
        column.push_back(m[i][num]);
    }
    return column;
}

double scalor_product(const std::vector<double>& v1,const std::vector<double>& v2){
    double sum=0;
    for(int i =0; i <v1.size(); i++){
        sum = sum + v1[i]*v2[i];
    }
    return sum;
}

std::vector<std::vector <double>> matrix_multiplication(const std::vector<std::vector<double>>& m1,const std::vector<std::vector<double>>& m2){
    std::vector<double> new_row;
    std::vector<std::vector <double>> new_matrix;
    for (int i =0; i < m1.size();i ++){
        new_row.clear();
        for (int j =0; j < m2[0].size();j ++){
            new_row.push_back(scalor_product(m1[i],column_reader(j,m2)));
        }
        new_matrix.push_back(new_row);
    }
    return new_matrix;
}
std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;
    // to set precision when printing
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    // getting the std::string representation 
    // of this std::stringstream object
    return out.str();
}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_multiplication(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;

}