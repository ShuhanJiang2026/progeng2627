#include <iostream>
#include <vector>

std::vector<unsigned long> catalan_numbers(int n);
std::vector<unsigned long> catalan_numbers(int n){
    unsigned long sum;
    std::vector<unsigned long>v={};
    for (int i =0;i <= n;i++){
        sum =1;
        if (v.size()!=0){
            int k =v.size()-1;
            for(int j =0;j <v.size();j++){
            sum = sum + v[j] * v[k-j];
            }
        }
        v.push_back(sum);
        
    }
    return v;
}

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}
