#include <iostream>
#include <string>
int main(){
    int guessnum =50;
    int upperbound=100;
    int lowerbound=0;
    std::string compare = " ";
    std::cout << "pleasee think of an integer number between 1 and 100" << std::endl;

    bool keepGoing = true;
    while (keepGoing){
        std::cout << "Is it " << guessnum << " ?" << std::endl;
        std::cout << "pleasee answer with >,=,<" << std::endl;
        std::cin >> compare;
        if (compare == "<"){
            upperbound = guessnum;
        }
        else if (compare == ">"){
            lowerbound = guessnum;
        }
        else if (compare == "="){
            keepGoing = false;
        }
        else{
            std::cout << "wrong input" << std::endl;
        }
        guessnum = (upperbound + lowerbound) / 2;

    }

}