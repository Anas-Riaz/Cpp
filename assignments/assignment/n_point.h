#include <iostream>
using namespace std;
class n_point{
    private:
        static int length ;
		int * p ;
    public:
		n_point(){
			p = new int[length] ;
		}
		~n_point(){
			delete p ;
		}

		void Set(int index, int val){
			p[index] = val ;
		}
		int Get(int index) const{
			return p[index] ;
		}
		static int Length(){
			return length ;
		}
};
int n_point::length = 4 ;