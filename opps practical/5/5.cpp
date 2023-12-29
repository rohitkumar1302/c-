#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    rectangle(){
        length=10;
        breadth=5;
    }
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void area(){
        cout<<"\narea of rectangle with length " <<length<<" and breadth "<<breadth<<" is : "<<length*breadth<<endl;
    }
    
};

int main(){
        rectangle rect1,rect2(10,7);
        rect1.area();
        rect2.area();
    return 0;
}