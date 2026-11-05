# include <iostream>
# include <vector>
int main(){
    std::cout << "Give me a number" << std::endl;
    int n;
    std::cin >> n ;
    std::cout << "Give me " << n << " numbers" << std::endl;
    //int i = 0;
    std::vector<int> sequence;
    for (int i = 0; i < n ;i++){
        int num;
        std::cout << "Give me a number" << std::endl;
        std::cin >> num;
        sequence.push_back(num);

    }
    /*while (i < n){
        int num;
        std::cout << "Give me a number" << std::endl;
        std::cin >> num;
        sequence.push_back(num);
        i++;
    }*/
    std::cout << "finished" << std::endl;
    std::cout << "Give me a number" << std::endl;
    int s;
    std::cin >> s;
    
    int count=0;
    for (int j = 0 ; j < sequence.size() ;j++){
        if (sequence[j] == s){
            count ++;
        }
    }
    std::cout << "the number in sequence which is equal to s is " << count <<std::endl;

}