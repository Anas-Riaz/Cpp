#include <iostream>
using namespace std;

class Fib1 {
    public:
        static int fib1(int n){
            return ( fib1(n - 1) + fib1(n - 2) );
        }
};

int main(){
    // cout << Fib1::fib1(6) << endl;
    // cout << Fib1::fib1(12) << endl;
    
    
    
    // StackOverflowError
    return 0;
}