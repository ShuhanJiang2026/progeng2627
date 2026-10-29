#include <iostream>
int gcd(int a, int b);
int euler_totient(int n);
int totient_sum(int n, int &depth);
int find_strongest_local_peak(int n1, int n2,int &depth_xi,int &depth_x,int &depth_xf);


int main(){
    int depth_xi;
    int depth_x;
    int depth_xf;
    int n1,n2;
    std::cout << "Give me two integers in ascending order." <<std::endl;
    std::cin >> n1 >> n2;
    int peak = find_strongest_local_peak(n1, n2, depth_xi, depth_x, depth_xf);

    std::cout << "Peak: " << peak << std::endl;
    std::cout << "Depth x - 1: " << depth_xi << std::endl;
    std::cout << "Depth x: " << depth_x << std::endl;
    std::cout << "Depth x + 1: " << depth_xf << std::endl;
    return 0;
    
}
    


int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int euler_totient(int n){
    int phi=0;
    for(int i = n; i > 0;i--){
        if (gcd(n, i) ==1){
            phi++;
        }
    }
    return phi;
}

int totient_sum(int n, int &depth){
    depth =0;
    int sum = 0;
    while (n > 1){
        n= euler_totient(n);
        sum = sum + n;
        depth ++;
    }
    return sum;

}

int find_strongest_local_peak(int n1, int n2,int &depth_xi,int &depth_x,int &depth_xf){

    depth_xi=0,depth_x =0,depth_xf=0;
    double strength,max_strength =0;
    int peak_x= -1;
    for (int x = n1+1; x < n2; x++){
        totient_sum(x-1, depth_xi);
        totient_sum(x, depth_x);
        totient_sum(x+1, depth_xf);
        if (depth_x > depth_xi && depth_x > depth_xf){
            strength = (2.0 * depth_x - depth_xi - depth_xf)/2.0;
            if (strength > max_strength){
                max_strength = strength;
                peak_x = x;
            }

        }
        
    }
    if (peak_x != -1){
        totient_sum(peak_x-1, depth_xi);
        totient_sum(peak_x, depth_x);
        totient_sum(peak_x+1, depth_xf);
    }

    return peak_x;
}