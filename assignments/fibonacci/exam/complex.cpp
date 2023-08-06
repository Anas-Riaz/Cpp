#include <iostream>
#include <string>
using namespace std ; 


class Complex{
    public :
        int real ;  
        float imaginary ;
};
friend ostream& operator << (ostream& out, Complex& obj){
    out << obj.real << obj.imaginary;
    return out ;
}

int main(){
    Complex obj1 ;
    return 0;
}