#include<iostream>
using namespace std;
class btech {
    static int num;
    public:
    void print(){
        cout<<"the number is : "<<num<<endl;
    }
};
int btech::num=34;
int main(){
        btech cse1,cse2;
        cse1.print();
        cse2.print();
    return 0;
}