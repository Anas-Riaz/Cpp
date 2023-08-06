#include <iostream>
using namespace std;

class vector {
    private :
        int i, j, k;
    
    public:
        vector(){
        }
        vector(int x, int y, int z){
            i = x;
            j = y;
            k = z;
        }

        vector(vector& new_vector){
            this -> i = new_vector.i;
            this -> j = new_vector.j;
            this -> k = new_vector.k;
        }

        void setter_i(int x = 0){
            i = x;
        }
        int getter_x(){
            return i;
        }

        void setter_j(int y = 0){
            j = y;
        }

        int getter_y(){
            return j;
        }         
        
        void setter_k(int z = 0){
            k = z;
        }
        int getter_z(){
            return k;
        }

        vector operator +(vector const & new_vector){
            vector temp;
            temp.i = i + new_vector.i;
            temp.j = j + new_vector.j;
            temp.k = k + new_vector.k;
            return temp;
        }

        void show(){
            cout << i << "i +" << j << "j +" << k << "k";
        }
};


int main(){
    vector vec(4,6,8);
    vec.show();
    return 0;
}
