#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    vin[0]=10;//read only ,programme won't run

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
    std::cout << v[0] << std::endl;

}