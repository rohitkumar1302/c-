#include <iostream>
using namespace std;

// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n){
        num=n;
    }   // constructor

    T printNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> Intnum(7);

    // create object with double type
    Number<double> Doublenum(7.7);

    cout << "int Number = " << Intnum.printNum() << endl;
    cout << "double Number = " << Doublenum.printNum() << endl;

    return 0;
}