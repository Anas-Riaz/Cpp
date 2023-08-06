#include<iostream>
#include<string>

int getValueFromUser(){
    std::cout << "Enter an integer " ;
    int input{};
    std::cin>> input ;

    return input ;
}

int main(){
    int num {getValueFromUser()} ;
    std :: cout <<"the double of your given number is "<< num*2 << "\n" ;
    return 0; 
}