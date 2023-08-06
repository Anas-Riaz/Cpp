#include<iostream>
#include<string.h>

int main(){
    int top = -1 ;
    std :: cout << top<< "\n" ;
 
    char arr[] = "a+b";
    char arr1[4];
    std :: cout << strlen(arr) << "\n";
    
    for(int i=0; i < 3; i++)
    {
        if (arr[i] != '+'){
            arr1[++top] = arr[i];
            std :: cout << top ; 
        }
    }
    int j = 0;
    std :: cout << arr1[j];//a
    std :: cout << arr1[++j];//b
    std :: cout << arr1[++j];//?
    return 0 ;
}