// MultiplicationTable :    Program that make a multiplication table with nested loop. 
// Author :                 Anthony Guay
// Date :                   4/28/2021
// Credit :                 CodeBeauty Tutorial @5:11 https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

int main()
{
    int firstNumber = 1, secondNumber = 1, sum;

    for (int firstNumber = 1; firstNumber <= 12; firstNumber++)
    {
        secondNumber = 1;

        do
        {
            sum = firstNumber * secondNumber;
            cout << firstNumber << " * " << secondNumber << " = " << sum << endl;
            secondNumber++;
        } while (secondNumber <= 12);
        cout << endl;
    }


    system("pause>0");
}
