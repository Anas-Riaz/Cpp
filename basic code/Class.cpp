#include <iostream>
#include <string>
using namespace std ;
class Person{
    public:
        float myNum;
        string Name;
};

int main(){
    Person Anas;
    Anas.myNum  = 2.2;
    Anas.Name = "Syed Anas Riaz";
    cout << Anas.Name << "\n " ;
    cout << Anas.myNum ;
    return 0 ;
}