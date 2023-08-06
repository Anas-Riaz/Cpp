#include<iostream>
using namespace std;

class A{
    public :
        int ivar = 7;
        void m1(){
            cout<<"A 's m1 " <<endl;
        }
        void m2(){
            cout<<"A 's m2 "<<endl;
        }
        void m3(){
            cout<<"A 's m3 "<<endl;
        }
};

class B : public A{
    public:
        void m1(){
            cout<<"B 's m1 "<<endl;
        }
};

class C :public B{
    public:
        void m3(){
            cout <<"C 's m3, " << (ivar + 6) <<endl;
        }
};

int main(){
    A a ;
    B b ;
    C c ;
    A a2;


// -------------------------------                   
 // b.m1();             Output:  B 's m1      , A 's m2,     , A 's m3
 // c.m2();
 // a.m3();
// ---------------------------------
    // c.m1();
    // c.m2();          Output: B 's m1        , A 's m2     , C 's m3, 13        
    // c.m3();
// --------------------------------
    // a.m1();
    // b.m2();          Output: A 's m1        , A 's m2     , C 's m3, 13
    // c.m3();

// --------------------------------
    
    // a2.m1();
    // a2.m2();          Output: A 's m1 , A 's m2 ,     A 's m3
    // a2.m3();
// --------------------------------
    return 0;
}
    
