#include <iostream>

void staircase(int size);
int input();

int input(){
    int size{};
    std :: cin >> size ;
    return size; 
}

void staircase(int size){
    for (int i = 0; i < size; i++){
        for(int j = i; j < (size-1); j++){
            std :: cout<< " ";
        }
        for(int k = 0; k < (i+1); k++){
            std :: cout << "#";
        }
        std :: cout <<"\n";
    }
}

int main(){
    std :: cout << "Program starts" << "\n";
    int result{input()};
    staircase(result);
    return 0;
}
