#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
int main(){
    std::string textname;
    std::cout<<"Please enter the name of txt file."<<std::endl;
    std::cin>>textname;
    std::ifstream inflie;
    inflie.open(textname);
    std::vector<std::string>v;
    if (!inflie.is_open()){
        std::cout<<"error opening file."<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(inflie >> tmp){
        v.push_back(tmp);
    }
    for(int i=v.size()-1; i>= 0;i--){
        std::cout<<v[i]<<std::endl;
    }

}