#include <iostream>
using namespace std; 

int main(){
    // string name[3];
    // for(int i = 0 ; i <= 3 ; i++ ){
    //     cout << "Enter name : ";
    //     cin >> name[i];
    // }
    // int array[] = {2,55,13,7647,89,25};
    // cout << array[4]<<endl;
    
    // array[4] = 98;
    // cout << array[4]<< endl;

    // array [6] = 4 ;
    // cout <<array[6]<< endl;

    // array [7] = 0 ;
    // cout <<array[6]<<endl;

    // array [8] = 9 ;
    // cout <<array[8];
    int hs = 10 ;
    int* ht[hs]{};

    for(int i = 0 ; i < hs; i++){
        if (ht[i] == NULL){
            ht[i] = 0;
            cout << ht[i] ;
        }
    }
    
    
    return 0 ;
}