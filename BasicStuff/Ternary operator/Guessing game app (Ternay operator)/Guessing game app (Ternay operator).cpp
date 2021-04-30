// Guessing game:   This app will help learn ternay (Conditional) operator with a small game.\
// Author :         Anthony Guay
// Date :           4/22/2021
// Credit :         CodeBeauty tutorial @2:50 https://www.youtube.com/watch?v=GQp1zzTwrIg

#include <iostream>
using namespace std;
int main()
{
    int HostNumber, GuestNumber;

    cout << "Welcome to the 'Guess what!' game !" << endl;
    cout << "Player 1, enter a number from 1 to 10: ";
    cin >> HostNumber;
    system("cls");

    cout << "Player 2, guess what number player 1 as entered between 1 and 10! : " << endl;
    cin >> GuestNumber;

    (HostNumber == GuestNumber)? cout << "Bitch you guessed it!" << endl : cout << "Nope!" << endl;


    system("pause>0");
}
