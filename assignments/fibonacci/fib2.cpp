#include <iostream>
using namespace std;

class Fib2 {
    public:
        static int fib2(int n){
            if (n < 2) {
                return n ;
            }
            return ( fib2(n - 1) + fib2(n - 2) );
        }
};

int main() {
    cout << Fib2 :: fib2(6) << endl;
    cout << Fib2 :: fib2(22) << endl;
    return 0;
}