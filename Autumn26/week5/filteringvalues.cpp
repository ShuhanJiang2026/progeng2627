/*Exercise: filtering values
Write a program that reads from the user a number n, then reads n numbers from the user and stores them 
in a vector. The program then reads a number t from the user and prints all the numbers in the vector that 
are less than t.*/
# include <iostream>
# include <vector>
int main(){
    std::cout << "Give me a number" << std::endl;
    int n;
    std::cin >> n ;
    std::cout << "Give me " << n << " numbers" << std::endl;
    int i = 0;
    std::vector<int> sequence;
    while (i < n){
        int num;
        std::cout << "Give me a number" << std::endl;
        std::cin >> num;
        sequence.push_back(num);
        i++;
    }
    std::cout << "finished" << std::endl;
    std::cout << "Give me a number" << std::endl;
    int t;
    std::cin >> t;
    std::cout << "the numbers in sequence which is smaller than t ";
    for (int j = 0 ; j < sequence.size() ;j++){
        if (sequence[j] < t){
            std::cout << sequence[j] <<" ";
        }
    }

}