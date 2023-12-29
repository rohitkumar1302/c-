#include <iostream>
using namespace std;
 class demo{
        int number;
        public:
        // data member initializer_list
       demo(int n):number(n){

       }
        void print(){
            cout<<"\nthe number is "<<number<<endl;
        }
    };

int main(){
    demo obj1(67);
    obj1.print();
    return 0;
}
