#include<iostream>
using namespace std;

// int main(){
//     int num = 4;
//     int * ptr = &num;

//     cout << num <<endl;
//     cout << ptr <<endl;
//     cout << *ptr <<endl;
//     return 0;
// }



int main()
{
    int array[5]{ 9, 7, 5, 3, 1 };
    std::cout << array << '\n';	 // type int[5], prints 009DF9D4
    std::cout << &array << '\n'; // type int(*)[5], prints 009DF9D4

    std::cout << '\n';

    int* ptr{ array };
    std::cout << ptr << '\n';	 // type int*, prints 009DF9D4
    std::cout << &ptr << '\n';	 // type int**, prints 009DF9C8

    return 0;
}
// h/t to reader PacMan for this example