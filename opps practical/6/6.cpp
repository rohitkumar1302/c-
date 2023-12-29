#include<iostream>
using namespace std;
class number{
    int n;
    public:
    number(){
        cout<<"enter the number : ";
        cin>>n;
    }
    void print(){
        cout<<"the number is: "<<n<<endl;
    }
};
int main(){
    number *num1; 
    num1=new number;
    num1->print();
    delete num1;

    return 0;

}