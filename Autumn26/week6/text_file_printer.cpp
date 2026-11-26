#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::ifstream infile;
    infile.open (argv[1]);
    if (infile.is_open()){
        int tmp;
        while (infile >> tmp){
            std::cout << tmp <<std::endl;
        }
    }
    else{
        std::cout << "error" <<std::endl;
    }
    return 0;
}