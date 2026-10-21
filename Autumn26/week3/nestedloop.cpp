#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int num=1,value=0;

    for(int c2 = 0; c2 < n; c2++){
        value=num;
        // the following loop draws one row
        for(int c = 0; c < n; c++){
            value=value + num;
            std::cout << value << " "; 
            // there is no << std::endl
            // because we want them on the same row
        }
        num++;
        std::cout << std::endl;
        // we go on a newline after each row

    }

}