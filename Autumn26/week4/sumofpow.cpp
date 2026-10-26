#include <iostream>

double mypow(double base, int exp){
    double result=1; 
    if (exp >=0){
        for (int i =0;i<exp;i++){
        result=result*base;
    }
    }else{
        for (int i =0;i>exp;i--){
        result=result/base;
    }
    }
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}
double sum(double x,int n){
    double sumofpower=0;
    for(int j =0;j<n;j++){
        sumofpower=sumofpower+mypow(x,j+1);
    }
    return sumofpower;
}

int main(){
    // we test examples with integer (and non-negative) exponent
    std::cout << sum(10,3);
}