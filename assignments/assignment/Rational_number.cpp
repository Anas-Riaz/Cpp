#include<iostream>
using namespace std;

class Rational_num{
    private :
        float p , q ;

    public:
        void display (){
            cout << p << "/" << q << endl;
        }
        void values(float x = 0 ,float y = 1){
            p = x; 
            q = y; 
        }

        Rational_num(){
            values();
        }

        Rational_num (float x ,float y){
            values(x, y);
        }

        Rational_num(Rational_num& new_rational){
            p = new_rational .p;
            q = new_rational .q;
        }

};

int main(){
    Rational_num any(3,5), any1;
    any.display() ;
    any1.display();

    Rational_num any4 (any) ;
    any4.display();
    return 0 ;
}