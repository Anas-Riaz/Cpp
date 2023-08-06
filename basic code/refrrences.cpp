#include<iostream>

using namespace std; 
int main(){
    string name  = "anas";
    string &name1 = name;
    
    cout << name << "\n ";
    cout << &name1 ; 
    cout << name1 ; 
    return 0 ;
}