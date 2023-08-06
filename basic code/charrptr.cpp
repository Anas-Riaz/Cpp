#include <iostream>
#include <iterator> // for std::size

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }
}

int main()
{
    char name[]{ "Mollie" };
    int arrayLength{ static_cast<int>(sizeof(name)/sizeof(name[0])) };
    int numVowels{ 0 };

    for (char* ptr{ name }; ptr != (name + arrayLength); ++ptr){
        std :: cout << *ptr  << (arrayLength)<<"\n" ;
        if (isVowel(*ptr))
        {
            ++numVowels;
        }
    }

    std::cout << name << " has " << numVowels << " vowels.\n";

    return 0;
}