#include <iostream>
#include<ostream>
using namespace std;

class Student {
    private :
        int count;
        string course;
    public:
// ------------------------------------------
        Student(){
        }
        Student(string course, int count){
        }

        Student(Student& new_Student){
            this -> course = new_Student.course;
            this -> count = new_Student.count;
        }
// -------------------------------------------
        void set_Course(string course){
            this -> course = course;
        }
        string get_Course(){
            return course;
        }
    //  -------------
        void set_count(int count){
            this -> count = count;
        }
        int get_count(){
            return count;
        }  

        void add_Course(string course){
            this -> course = course;
        }  
// ---------------------------------------------
friend ostream& operator ==(ostream& COUT, Student& new_Student){
    COUT<< new_Student.count;
    return COUT;
}
friend ostream& operator <<(ostream& COUT, Student& new_Student){
    COUT  << new_Student.course;
    return COUT;
}

        ~Student(){};
};
