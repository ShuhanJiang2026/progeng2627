#include <iostream>
#include <vector>
double min_vector_element(const std::vector<double>& vin){
    if (vin.size() ==0){
        return -1;
    }
    int min_index =0;
    for (int i=0;i < vin.size();i++){
        if (vin[i] < vin[min_index] ){
            min_index = i;
        }
    }
    return min_index;


    }

int main(){
    std::vector <double> vin = {2,4,1,8,19};
    std::cout << min_vector_element(vin) <<std::endl;
} 