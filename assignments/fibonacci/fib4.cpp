#include <iostream>
using namespace std;


class Fib4 {
    public:
        static int fib4(int n) {
        int last = 0, next = 1;
        for (int i = 0; i < n; i++) {
            int oldLast = last;
            last = next;
            next += oldLast;
        }

        return last;
        }
};


int main() {
    for (int n = 0; n < 20; n++) {
        cout << Fib4 :: fib4(n) << endl;
    }
    return 0;
}