#include <iostream>
#include <map>
using namespace std;

class Fib3 {
    public:
        static int fib3(int n) {
            static map < int , int > memo;

            if (n < 2) {
                return n;
            }

            if (!memo.count(n)) {
                memo[n] = fib3(n - 1) + fib3(n - 2);
            }

            return memo[n];
        }   
};


int main() {

    for (int n = 0; n < 40; n++){
        cout << Fib3 :: fib3(n) << endl;
    
    }

    return 0;
}