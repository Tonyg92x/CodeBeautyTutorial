// DoWhileLoop :    Program for PIN validation
// Author :         Anthony Guay
// Date :           4/27/2021
// Credit :         CodeBeaty tutorial @4:25 https://www.youtube.com/watch?v=GQp1zzTwrIg

#include <iostream>
using namespace std;

int main()
{
    int usersPin = 1234, pin, errorCounter = 0;

    do 
    {
        cout << " Please enter your PIN : ";
        cin >> pin;

        if (pin != usersPin)
        {
            errorCounter++;
        }
    } while (errorCounter < 3 && pin != usersPin);

    if (errorCounter < 3)
    {
        cout << "Welcome in ! (branch lunch fonction)" << endl;
    }
    else
    {
        cout << "Three errors without the good result: Acces denied.";
    }

    system("pause>0");
}

