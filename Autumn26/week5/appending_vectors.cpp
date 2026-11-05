#include <iostream>
#include <vector>
void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i =0;i < vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(int i =0;i < vin2.size();i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    std::vector<int>vout;
    std::vector<int>vin1 ={1,3,5,7,9};
    std::vector<int>vin2 ={2,4,6,8,10};
    append_vectors(vin1,vin2,vout);
    for(int i =0;i < vout.size();i++){
        std::cout << vout[i] <<std::endl;
    }
}