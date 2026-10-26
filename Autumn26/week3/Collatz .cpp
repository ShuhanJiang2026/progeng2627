#include <iostream>
int main(){
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    int steps, maxnum;
    steps=0;
    maxnum =n;
    std::cout << "sequence is : " << n;
    while (n != 1){
        if (n % 2 ==0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        std::cout << ", " << n;
        if (maxnum < n){
            maxnum = n;
        }
        steps ++;

    }
    std::cout << std::endl;
    std::cout << "steps : "<< steps << std::endl;
    std::cout << "maxnum : "<< maxnum << std::endl;
    return 0;

}