#include<iostream>
#include<fstream>
#include <string>

using namespace std ;

int main(){

    // creating file 
    // using ofstream class
    cout << "Enter name of yor file : " ;
    string Name ;
    cin >> Name;  
    ofstream MyFile (Name+".txt");
    MyFile << "ABCDEFGHIJKL";

    MyFile.close();
  
    string Text ;
    ifstream Read(Name+".txt");
    while(getline(Read,Text)){
        cout << Text ;
    }

    Read.close();

    return 0;
}