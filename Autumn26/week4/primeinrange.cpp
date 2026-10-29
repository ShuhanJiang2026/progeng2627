#include <iostream>
int smallest_factor(int n) {
    for (int cf = 2; cf < n; cf++) {
        if (n % cf == 0) {
            return cf; 
        }
    }

    return 0;  
}
void decide_prime(int n1,int n2){
    for (int num = n1; num <= n2; num++){
        if  (smallest_factor(num) ==0){
            std::cout << num << std::endl;
        }
    }

}
int main(){
    int x1,x2;
    std::cout << "Give me two numbers in acending order." << std::endl;
    std::cin >> x1 >> x2;
    decide_prime(x1,x2);

}