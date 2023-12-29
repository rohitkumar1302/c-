#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "sunday";
        break;
    case 1:
        dayName = "monday";
        break;
    case 2:
        dayName = "tuesday";
        break;
    case 3:
        dayName = "wednesday";
        break;
    case 4:
        dayName = "thrusday";
        break;
    case 5:
        dayName = "frinday";
        break;
    case 6:
        dayName = "saturaday";
        break;
    default:
        dayName = "Invalid day name";
    }
    return dayName;
}
int main()
{
    cout << getDayOfWeek(0);
    return 0;
}
