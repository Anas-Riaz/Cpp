// #include <iostream>

// void incrementAndPrint()
// {
//     int value{ 1 }; // automatic duration by default
//     ++value;
//     std::cout << value << '\n';
// } // value is destroyed here

// int main()
// {
//     incrementAndPrint();
//     incrementAndPrint();
//     incrementAndPrint();

//     return 0;
// }

#include <iostream>

void incrementAndPrint()
{
    static int s_value{ 1 }; // static duration via static keyword.  This initializer is only executed once.
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    return 0;
}