#include <iostream>
#include <fstream>
#include <cstdlib>
int main(){
    std::string textname;
    std::cout<<"Please enter the name of txt file."<<std::endl;
    std::cin>>textname;
    std::ifstream infile;
    infile.open(textname);
    if (!infile.is_open()){
        std::cout<<"error opening file."<<std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

}
