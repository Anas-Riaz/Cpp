#include<iostream>
#include<string>
using namespace std; 

class point{
    private:
        float x,y,z;
    public: 
        point(){
            this->x = 00;
            this->y = 00;
            this->z = 00;
        }
        point(float x,float y, float z){
            this->x =x;
            this->y = y;
            this->z = z;
        }
        point(const point& copied_point){
            this->x = copied_point.x;
            this->y = copied_point.y;
            this->z = copied_point.z;
        }

        void set_x(float x){
            this-> x = x;
        };

        void set_y(float y){
            this-> y = y;
        };

        void set_z(float z){
            this-> z = z;
        };

        float get_x(){
            return this->x;
        }

        float get_y(){
            return this->y;
        }

        float get_z(){
            return this->z;
        }

        void add(const point& obj){
            this->x += obj.x;
            this->y += obj.y;
            this->z += obj.z;
        }
        point& operator + (const point& pt1){
            point temp;
            temp.x = this->x + pt1.x;
            temp.y = this->y + pt1.y;
            temp.z = this->z + pt1.z;
            return temp;
        }
        // void display(){
        //     cout << "-----------------------------------------"<<endl;
        //     cout << "value of x : "<< this->x <<endl;
        //     cout << "value of y : "<< this->y <<endl;
        //     cout << "value of z : "<< this->z <<endl;
        // }
friend ostream& operator<<(ostream& OUT, point& new_point){    
    OUT << "the value of x : " << new_point.x;
    OUT << "the value of y : " << new_point.y;
    OUT << "the value of z : " << new_point.z;
    }
};

int main(){
    point p1, p3, p4;
    p1.set_x(3.4);
    p1.set_y(4.0);
    p1.set_z(2.2);
    p3 = p1;
    p3.set_y(4.9);
    point p2(p1);
    p1.add(p2);
    // p1.display();
    // p2.display();
    // p3.display();
    // p4.display();
    return 0;
}