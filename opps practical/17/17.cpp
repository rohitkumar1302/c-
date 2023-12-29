#include <iostream>
using namespace std;

template <class T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    int result1;
    double result2;
    // calling with int parameters
    result1 = add(2, 3);
    cout << "integer parameters added 2 + 3 = " << result1 << endl;

    // calling with double parameters
    result2 = add(2.2, 3.3);
    cout << "double parameters added 2.2 + 3.3 = " << result2 << endl;

    return 0;
}