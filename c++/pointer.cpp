#include <iostream>
using namespace std;
int main()
{

    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "mike ";
    string *pName = &name;

    cout << *pAge << endl;
    cout << *pGpa << endl;
    cout << *pName < < endl;

    return 0;
}