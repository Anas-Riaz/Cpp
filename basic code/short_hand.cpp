#include <iostream>
#include <string>
using namespace std ; 
int main(){
    int value = 8 ;
    string result =(value < 10) ? "Value greater then 10." : "Value less then 10.";
    cout << result;
    return 0;
}