#include <iostream>
using namespace std;

class add{
private:
    int a ;
    int b ;
    public:
    add(int num1,int num2){
        a=num1;
        b=num2;
    }
    void print();
};

void add::print(){
     cout<<"addition of a and b : "<<a+b;
}

int main(){
    add obj(12,5);
    obj.print();
    return 0;
}