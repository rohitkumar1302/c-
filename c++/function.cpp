#include<iostream>
using namespace std;

// void sayhi(string name ,int age){
//     cout<<"Hello  " <<name<<"  you are "<<age<< "  years old"<<endl;
// }
// int main()
// {
//     sayhi("Rohit_sharma",21);
//     sayhi("raushan" ,45);
//     return 0;
// }


void sayHi(string name,int age);

int main()
{
    sayHi("hitman",40);
    sayHi("kohli",41);   
    return 0;
}

void sayHi(string name,int age){
    cout<<"my name is "<<name<<" i am " <<age <<  "years old"<<endl;
}
