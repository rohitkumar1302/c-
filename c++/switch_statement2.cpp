#include <iostream>
using namespace std;
int main(){
    int dayNum =10;
switch (dayNum)
{
case 0:
    cout<<"sunday";
    break;
case 1:
    cout<<"monday";
    break;
case 2:
    cout<<"tuesday";
    break;
case 3:
    cout<<"wednesday";
    break;
case 4:
    cout<<"thrusday";
    break;
case 5:
    cout<<"friday";
    break;
case 6:
    cout<<"saturday";
    break;

default:
    cout<<"Invalid day name";

}

return 0;
}