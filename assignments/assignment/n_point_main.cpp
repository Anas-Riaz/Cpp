#include <iostream>
#include "n_point.h"
using namespace std;

int main() {
	n_point point;
// -------------------------------
	point.Set(0, 100);
	point.Set(1, 200);
	point.Set(2, 300);
	point.Set(3, 400);
// -------------------------------

	cout << "Length : " << point.Length() << endl; 
	cout << "Get (0): " << point.Get(0) << endl;
	cout << "Get (1): " << point.Get(1) << endl;
	cout << "Get (2): " << point.Get(2) << endl;
	cout << "Get (3): " << point.Get(3) << endl;
	
// ------------------------------
    return 0;
}