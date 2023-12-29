#include <iostream>
using namespace std;
int main()
{
    int num = 132;
    int rem;
    int rev = 0;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    cout << rev;
    return 0;
}