#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(s == vin[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector<std::string>translate_i;
    std::vector<std::string>translate_f;
    std::vector<std::string>origin;
    std::ifstream infile;
    std::string tmp;
    infile.open("translate.txt");
    while(infile >> tmp){
        translate_i.push_back(tmp);
        infile >>tmp;
        translate_f.push_back(tmp);
    }
    infile.close();
    infile.open("origin.txt");
    while(infile >> tmp){
        origin.push_back(tmp);
    }
    infile.close();
    for(int i =0;i < origin.size();i++){
        int num;
        num=search_vector(origin[i],translate_i);
        if (num !=-1){
            std::cout << translate_f[num] << " ";
        }
        else{
            std::cout << origin[i]<< " ";
        }
    }




}