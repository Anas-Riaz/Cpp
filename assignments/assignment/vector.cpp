#include<iostream>
using namespace std ;
    
class Vector{
    private :
        float i ,j , k ;
    public :
        Vector(){
          
        }
        Vector(float x, float y ,float z ){
            
        }
        // Vector(const Vector& new_vector ){
        //     i = new_vector.i;
        //     j = new_vector.j;
        //     k = new_vector.k;
        // }
        // void values (float x = 0, float y = 0,float z = 0){
        //     i = x ;
        //     j = y ; 
        //     k = z ;
        // }
        void display(){
            cout << i << "i +" << j << "j +" << k << "k" << endl;
        }
};

int main(){
    // Vector vec1,vec(3,5,8),vec2(5,7,9);
    // vec.display();
    // vec2.display();
    // vec1.display();
    // //-------------------------------//
    // Vector vec3(vec2);
    // vec3.display();
    Vector vec2(1,1,1);
    vec2.display();
    return 0 ;
}