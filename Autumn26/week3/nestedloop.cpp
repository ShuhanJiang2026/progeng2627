#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int num=1,value=0;
    for (int c2 = 0 ;c2 <n ;c2++){
        value = 0;
        for(int i = 0;i < n;i++){
            value = value + num;
            std::cout << value <<"\t";
        }
        num=num +1;
        std::cout<<" "<<std::endl;
    }
}