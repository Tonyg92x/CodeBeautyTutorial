// DigitsCounter(loop) :    Program that count how many digits a number entered by a user has.
// Author :                 Anthony Guay
// Date :                   4/27/2021
// Credit :                 CodeBeaty tytorial @ 3:53 https://www.youtube.com/watch?v=GQp1zzTwrIg


#include <iostream>
using namespace std;

int main()
{
    // Count digits of a number
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0)
    {
        cout << "You have entered 0." << endl;
    }
    else
    {
        int counter = 0;
        while (number > 0)
        {
            number = number / 10; // Exemple , 112 / 10 = 11.2. The result will be 11. 
            counter++; // If the result of the precedent expression reach 0.111 so 0, the counter won't be incremented because the while loop will have reach 0.
        }
        cout << "You have entered a number with " << counter << " numbers." << endl;
    }
    
    system("pause>0");
}

