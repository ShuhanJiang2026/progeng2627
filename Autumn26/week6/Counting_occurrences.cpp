#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin,int &count){
    count = 0;
    for(int i = 0; i < vin.size(); i++){
        if(s == vin[i]){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<std::string>vin1;
    std::vector<std::string>vin2;
    std::ifstream infile;
    infile.open("text1.txt");
    std::string tmp;
    while(infile >> tmp){
        vin1.push_back(tmp);
    }
    infile.close();
    infile.open("words.txt");
    while(infile >> tmp){
        vin2.push_back(tmp);
    }
    infile.close();
    int count;
    for(int i=0;i <vin2.size();i++){
        count =search_vector(vin2[i],vin1,count);
        std::cout << vin2[i] <<" : " << count <<std::endl;

    }



    
}