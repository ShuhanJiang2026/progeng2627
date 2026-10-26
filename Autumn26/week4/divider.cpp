#include <iostream>
void divider(int n1,int n2,int &quotient,int &remainder){
    quotient = n1 / n2;
    remainder = n1 % n2;
}
int main(){
    int x1,x2;
    std::cout << "Give me two integers."<< std::endl;
    std::cin >> x1 >> x2;
    int quotient,remainder;
    divider(x1, x2, quotient,remainder);
    std::cout << "quotient:"<< quotient <<std::endl;
    std::cout << "remainder:"<< remainder <<std::endl;
}