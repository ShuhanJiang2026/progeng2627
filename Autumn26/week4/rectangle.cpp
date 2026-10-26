#include <iostream>
#include <cmath>
void rectangle_property(double n1,double n2,double &perimeter,double &area){
    perimeter = 2* (n1 + n2);
    area = n1 * n2;
}
int main(){
    double x1,x2;
    std::cout << "Give me two sides."<< std::endl;
    std::cin >> x1 >> x2;
    double perimeter,area;
    rectangle_property(x1, x2, perimeter, area);
    std::cout << "perimeter:"<< perimeter <<std::endl;
    std::cout << "area:"<< area <<std::endl;
}