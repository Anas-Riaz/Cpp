#include<iostream>
using namespace std ;

class Point{
    private:
        float x , y;
    public:
        void set_XY( int new_x, int new_y);
        
        float get_x();
        
        float get_y();

        int operator == (const Point &point); 
};

void Point:: set_XY(int new_x, int new_y){
    x = new_x ;
    y = new_y ; 
}

float Point :: get_x (){
    return x ;
}

float Point :: get_y(){
    return y ;
}

int Point :: operator ==(const Point &point){
    if (x == point.get_x() && y == point.get_y()){
        return 1 ;
    }
    else {return 0 ;}
}



