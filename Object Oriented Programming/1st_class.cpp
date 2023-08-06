#include <iostream>
#include<string>

using namespace std;

class Student{
    private:
        string seat_no;
        string StudentName;
        float Marks;
        int Year;
    public:
        Student(){
            this-> Marks = 00;
        }
        Student(string Student_name, string seatNo, float marks, int year){
            this->StudentName = Student_name;
            this->seat_no = seatNo;
            this->Marks = marks;
            this->Year= year;
        }
        Student(const Student& copied_data){
            this->Marks = copied_data.Marks;
            this->seat_no = copied_data.seat_no;
            this->StudentName = copied_data.StudentName;
            this->Year = copied_data.Year;
        }

        void set_Name(string name){
            this->StudentName = name;
        }
        
        void set_Seat_No(string Seat_No){
            this->seat_no = Seat_No;
        }
        
        void set_Marks(float marks){
            this->Marks = marks;
        }
        
        void set_year(int year){
            this->Year = year;
        }
        
        string get_Name(){
            return this->StudentName;
        }
        string get_Seat_No(){
            return this->seat_no;
        }
        float get_Marks(){
            return this->Marks;
        }
        int get_Nmae(){
            return this->Year;
        }

        
        void display(){
            cout << "-------------------------------------------------" << endl;
            cout << "The object of student are being displayed"<< endl;
            cout << "Name : "<<this->StudentName<<endl;
            cout << "Seat No. : "<<this->seat_no<<endl;
            cout << "Marks : "<<this->Marks<<"/100" <<endl;
            cout << "Year : "<<this->Year<<endl;
        }
};

int main(){
    Student student1,student3;
    Student student2("Anas Riaz", "B20102156", 90 ,2023);
    student2.display();
    Student student4(student2);
    student4.display();
    student3.set_Name("Taha Akbar");
    student3.set_Seat_No("B20102176");
    student3.set_Marks(95);
    student3.set_year(2023);
    student3.display();
    student4.set_Name("Arqam Aftab");
    student4.set_Seat_No("B20102080");
    student4.set_Marks(96);
    student4.set_year(2023);
    student4.display();
    return 0;
}