#include <iostream>
#include <vector>
using namespace std;


class Fib5 {
    private:
        int last = 0, next = 1;
    public:
        // method 1
        int stream() {
            int oldLast = this -> last;
            this -> last = this -> next;
            this -> next += oldLast;

            return oldLast;
        }

        // method 2
        vector <int> stream(int n) {
            int last1 = 0, next1 = 1, oldLast;
            vector <int> ansStream;
            for (int i = 0; i < n; i++) {

                oldLast = last1;
                last1 = next1;
                next1 += oldLast;

                ansStream.push_back(oldLast);
            }

            return ansStream;
        }
};

int main() {
    Fib5 fib5;

    // method 1
    cout << "METHOD 1" << endl;
    for (int n = 0; n < 40; n++) {
        cout << fib5.stream() << endl;
    }

    // method 2
    cout << "\nMETHOD 2" << endl;
    vector<int> ans = fib5.stream(40);
    for (int n = 0; n < 40; n++) {
        cout << ans[n] << endl;
    }
    return 0;
}