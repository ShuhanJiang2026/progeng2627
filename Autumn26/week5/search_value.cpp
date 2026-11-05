#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size() ;i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int>vin ={3,5,7,9,11,13};
    int n = 9;
    std::cout << search_vector(n,vin);
}