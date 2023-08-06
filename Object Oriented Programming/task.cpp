#include<iostream>
#include<string.h>
using namespace std;

class XYCoordinates{
    private:
        float x, y;
    public:
        XYCoordinates(){
            this->x = 00.00;
            this->y = 00.00;
        }
        XYCoordinates(float X, float Y ){
            this->x = X;
            this->y = Y;
        }
        XYCoordinates(const XYCoordinates& copied_xy_co_ordinates){
            this->x = copied_xy_co_ordinates.x;
            this->y = copied_xy_co_ordinates.y;
        }

        void display(){
            cout << "======================================"<<endl;
            cout << "the value of x is : " <<this->x << endl;
            cout << "the value of y is : " <<this->y << endl;
        }
};      

int main(){
    XYCoordinates point1(34.5, 68.5);
    XYCoordinates point2 = point1;
    XYCoordinates point3(12, 3.6);
    point1.display();
    point2.display();
    point3.display();
    return 0;
}