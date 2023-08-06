#include<iostream>
#include<string>

void passbyValue(std :: string str){
    std :: cout << str << "\n" ;
}

void passbyrefrence(const std :: string& ref){
    std :: cout << ref << "\n" ;
}

void passbyaddress(const std :: string* ptr){
    std :: cout << *ptr << "\n" ;
}

void passbyaddress(const std :: string* ptr, int* ptr1){
    *ptr1= 1;
    std :: cout << *ptr <<  "\n" << *ptr1 <<  "\n" ;
}


int main(){
// variable declaration
    int c{0};
    std :: string str {"hello"};
    
// =====================================================================
//calling functions
    passbyValue(str);

//passbyrefrence
    passbyrefrence(str);

//  passbyaddress  
    passbyaddress(&str);
    passbyaddress(&str, &c);
    std :: cout  <<  c <<  "\n" ;
    return 0 ;
}