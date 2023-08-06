#include <iostream>
#include <string>
using namespace std;

class Thing {
    private :
        int * x ;
    public :
        Thing ();
        Thing (int val);
        void set(int val);
        int get ();
        ~Thing();
};

Thing :: Thing(){
    cout << "Constructing new thing using default cunstructor"<< endl;
    this -> x = 0 ;
}

Thing :: Thing(int val){
    cout << "Constructing new thing with value = "<< val << endl ;
    x = new int(val);
}

Thing :: ~Thing(){
    cout << "Deleting thing with value = " << *x << endl ;
    delete this -> x;
}

void Thing :: set(int val){
    *x = val;
}

int Thing :: get (){
    return *this -> x ;
}

void Do2(int level ){
    cout << "Enter Do2 with level = "<< level << endl;
    Thing TT (level);
}

void Do1 (int level){
    cout << "Enter Do1 with level = " << level << endl;
    Thing TTT(level);
    Do2 (level+1);
}

int main (){
    Thing T(1);
    cout << endl ;
    Do2(2);
    cout << endl ;
    Do1(3);
    cout << endl ;
    Do2(5);
    cout << endl ;
    return 0 ;
}
