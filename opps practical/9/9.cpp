#include <iostream>
using namespace std;
class integer{
    int i;
    public:
    integer(int n){
        i=n;
    }
    integer operator++(){ //pre increament
        integer temp(i);
        
        temp.i=++i;
        return temp;
    }
    integer operator++(int){ // post increament
        integer temp(i);
        
        temp.i=i++;
        return temp;
    }
    integer operator--(){ // pre decreament
        integer temp(i);
        
        temp.i=--i;
        return temp;
    }
    integer operator--(int){ // post decreament
        integer temp(i);
        
        temp.i=i--;
        return temp;
    }
      int print(){
        return i;
    }
};
int main(){
    integer obj1(6);
   cout<<"\nthe value of i of obj1 before increament is : "<<obj1.print()<<endl;
   integer obj2= ++obj1;
   cout<<"\nthe value of i of obj2 after pre increament is : "<< obj2.print()<<endl;
   cout<<"the value of i of obj1 after pre increament is : "<< obj1.print()<<endl;
   obj2=obj1++;
   cout<<"\nthe value of i of obj2 after post increament of obj1  is : "<< obj2.print()<<endl;
   cout<<"the value of i of obj1 after post increament is obj1 is : "<< obj1.print()<<endl;
    
   obj2= --obj1;
   cout<<"\nthe value of i of obj2 after pre decreament of obj1 is : "<< obj2.print()<<endl;
   cout<<"the value of i of obj1 after pre decreament is obj1 : "<< obj1.print()<<endl;

   obj2=obj1--;
   cout<<"\nthe value of i of obj2 after post decreament of obj1  is : "<< obj2.print()<<endl;
   cout<<"the value of i of obj1 after post decreament is obj1 is : "<< obj1.print()<<endl;


    
    return 0;

}