#include <iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    complex operator+(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
     complex operator-(complex x){
        complex temp;
        temp.real=real-x.real;
        temp.img=img-x.img;
        return temp;
    }
     complex operator*(complex x){
        complex temp;
        temp.real=real*x.real;
        temp.img=img*x.img;
        return temp;
    }
     complex operator/(complex x){
        complex temp;
        temp.real=real/x.real;
        temp.img=img/x.img;
        return temp;
    }
    void print(){    
         cout<<real<<"+"<<img<<"i";
    }
};
int main(){
    complex c1(4,6);
    complex c2(2,4);
    complex c3;

     c3=c1+c2;
     cout<<"the addition of two complex no is: ";
     c3.print();

     c3=c1-c2;
     cout<<"\nthe substraction of two complex no is: ";
     c3.print();

     c3=c1*c2;
     cout<<"\nthe multiplication of two complex no is: ";
     c3.print();

     c3=c1/c2;
     cout<<"\nthe division of two complex no is: ";
     c3.print();
     
    return 0;
}