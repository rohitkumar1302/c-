#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    string color,pluralnoun,celebrity;

    cout<<"enter a color";
    getline(cin,color);
    cout<<"enter a pluralnoun";
    getline(cin,pluralnoun);
    cout<<"enter a celebrity";
    getline(cin,celebrity);

    cout<<"Rose are "<<color <<endl;
    cout<<pluralnoun  <<" are blue"<<endl;
    cout<<"I Love "<<celebrity <<endl;

    return 0;
}
