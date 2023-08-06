#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main (){
    cout << "Enter the name of your file "<<endl ;

    string Name ;
    cin >> Name ;
    ofstream fout;
    fout.open(Name+".txt");
    fout << "Anas is here";
    fout.close();

    char upper_case, lower_case, read;
    ifstream fin;
    fin.open(Name+".txt");
    char * p = new char[1000];
    while (fin.eof() == 0){
        fin >> read ;
    }