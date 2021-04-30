// ReversingNumber(Whileloop):  Program that will write out a number that a user as entered with a while loop.
// Author :                     Anthony Guay
// Date :                       4/27/2021
// Credit :                     CodeBeaty tutorial @4:15 https://www.youtube.com/watch?v=GQp1zzTwrIg

#include <iostream>
using namespace std;

int main()
{
    // Reversing number
    int number, reversedNumber=0;
    cout << "Number : ";
    cin >> number;

    while (number != 0)
    {
        reversedNumber *= 10;
        // int lastDigit = number % 10;
        reversedNumber += number % 10;
        number /= 10;
    }
    cout << "Your number reversed is: " << reversedNumber << endl;

    system("pause>0");
}
