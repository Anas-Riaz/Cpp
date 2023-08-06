#include<iostream>
#include<ostream>
using namespace std;


class Rational {
    private :
        int numerator, denominator;    
    public : 
        Rational();
        Rational(int numer, int denom );
        
        int getNumerator()  const;  
        int getDenominator() const;

    friend Rational operator + (const Rational& left, int right );
    friend ostream& operator << (ostream& out, Rational& obj);
};