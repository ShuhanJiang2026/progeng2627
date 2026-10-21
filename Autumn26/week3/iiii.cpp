#include <iostream>
#include <string>

int main(){
    int input, result,remainder,n = 0;
    std::cout << "please enter a number."<<std::endl;
    std::cin >> input;
    result=input;
    while (result >=3){
        result = result -3;
        n ++;
    }
    remainder = result % 3;
    std::cout << "the quotient of "<< input << "is" << n <<std::endl;
    std::cout << "the remainder of "<< input << "is" << remainder <<std::endl;
}