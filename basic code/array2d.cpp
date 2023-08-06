#include <iostream>
using namespace std;

int main (){
    int matrix[3][3];
    for (int i =0; i <= 3; i++){
        for (int j=0; j <= 3; j++){
            cout <<"enter value : ";
            cin>> matrix[i][j];
        }
    }

    for(int k = 0; k <= 3; k++){
        for (int m = 0; m <= 3; m++){
            cout << matrix[k][m] << endl ;
        }
    }
    return 0;
}