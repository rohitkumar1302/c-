#include<iostream>
using namespace std;

int main()
{
    string pharase ="Rohit_sharma ";
    // cout<<pharase<< endl; 
    // cout << pharase[2];
    // cout<< pharase.find("arma",0);
    // cout<<pharase.substr(5,4);
    string  pharasesub;
    pharasesub = pharase.substr(6,2);
    cout<<pharasesub;
    
    return 0;
}
