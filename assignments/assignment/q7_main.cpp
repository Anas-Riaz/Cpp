#include<iostream>
#include "Student.h"

int main(){
    Student Salman;

    Salman.add_Course ("BSCS 412");
    Student Akbar(Salman);

    cout << Akbar.get_Course() << endl;

    Akbar = Salman;

    cout << Akbar <<endl;
    cout << Salman <<endl;

}