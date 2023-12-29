#include<iostream>
using namespace std;
int main()
{
    int num1 , num2;
    char op;
    
    cout<<"enter first number :"<<endl;
    cin>> num1;
    cout<<"enter operator :"<<endl;
    cin>>op;
    cout<<"enter third number:"<<endl;
    cin>> num2;

    int result;
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op =='-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1/num2;
    }
    else{
        cout<<"Invalid operator";
    }
    cout<<result;
    return 0;
     
    
}
