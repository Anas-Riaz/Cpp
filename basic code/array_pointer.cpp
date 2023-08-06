#include<iostream>
#include<string.h>


const int print(int* ptr){
    std :: cout <<"\n" <<*ptr;
}
int main(){
    int array[] = {1,2,3,4,5};
   
    
    int* ptr{array};
    std :: cout << *ptr <<"\n" <<ptr ;

    print(array);
    return 0;

}

