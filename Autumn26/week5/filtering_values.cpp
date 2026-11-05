#include <iostream>
#include <vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i = 0; i < vin.size() ; i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}
int main(){
    std::vector<double> vin = {1,2,3,4,5,6,7,8,9,10};
    std::vector<double> vout;
    filter_v(vin,5,vout);
    for (int i =0; i < vout.size() ; i++){
        std::cout << vout[i] << std::endl;
    }
}