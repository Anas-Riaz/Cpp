#include<iostream>
using namespace std ;

int main(){
      int x = 5 ;
      int y ;
      cout << "Ente number between 0 - 9 :  " ;
      cin >> y ;
      if (x == y){
          cout << "You guessed it correctly.";
      }else if(y < x) {
          cout << "Guess higher";
      }
      else {
          cout << "you guessed wrong.";
      }
      return 0 ;
}   