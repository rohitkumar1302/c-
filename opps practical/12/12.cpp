#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"\nbase class called";
    }
};
class B:public A{
    public:
    void display1(){
        cout<<"\nderived from class A";
    }
};
class C:public B{
    public:
    void display2(){
        cout<<"derived from class B";
    }
};

int main(){
    C obj;
    obj.display();
     obj.display1();
    return 0;
}