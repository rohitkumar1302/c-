#include<iostream>
using namespace std;
void ram(int num1, int num2,int num3)
{
    if (num1>= num2 & num1>= num3)
    {
        cout<<num1;
    }
    else if (num2>=num3 & num2>=num1)
    {
        cout<<num2;
    }
    else{
        cout<<num3;
    }
   
}
int main()
{
    ram(23,45,45);
    return 0;
}

