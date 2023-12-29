#include <iostream>
using namespace std;
int main(){
    int seceretNumber=7;
    int guess;
    int guessCount =0;
    int guessLimit =3;
    bool outOfGuess = false;
    while (seceretNumber!=guess && !outOfGuess)
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter guess : ";
            cin >> guess;
            guessCount++;
        }
        else{
            outOfGuess = true;
        }
         
    }
    if (outOfGuess)
    {
        cout<<"you lose";
    }
    else{
        cout << "you win";
    }
    
     
return 0;
}