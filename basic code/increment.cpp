#include<iostream>
using namespace std;
int top = -1;

void func(){
    cout << " in func\n";
    ++top;    
}

void func1 (){
    cout << " func1\n";
    --top;
}

int main(){
    cout << "starting main\n ";
    ++top ;
    cout << top <<"\nmain inc\n";
    cout << " calling func\n";
    func();
    cout <<top << "\ncalling func1\n";
    func1();
    cout <<top << "\ncalling func\n";
    func();
    cout <<top;
    return 0 ;
}