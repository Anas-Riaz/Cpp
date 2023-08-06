#include<iostream>
using namespace std ; 

float Farenhiet(float temperature){
    return ((temperature* 9 /5) +32);
}
float Celcius (float temperature){ 
    return (temperature- 32 )* 5/9;
}
int main(){
    string choice ;
    cout << "Enter 'c' for Celcius and 'f' for Farenhiet : ";
    cin >> choice;

    float temp ; 
    cout<< "Enter temperature : " ;
    cin >> temp ;

    if (choice == "f" || choice == "F"){
        cout << temp << " Celcius is equal to " << Farenhiet(temp) << " Farenhiet";
    }

    else if (choice == "c" || choice == "C"){
        cout << temp << " Farenhiet is equal to " << Celcius(temp) << " Celcius";
    }else {
        cout << "Please enter right keyword";
    }
    return 0 ;
}