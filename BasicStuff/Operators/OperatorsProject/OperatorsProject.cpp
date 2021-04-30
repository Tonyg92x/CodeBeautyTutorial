// Operators :  This files is a tutorial for C++ operators
// Author :     Anthony Guay
// Date :       4/22/2021
// Credit :     CodeBeauty TutorialVideos @1:56 https://www.youtube.com/watch?v=GQp1zzTwrIg 

#include <iostream>
using namespace std;
int main()
{
    // +, -, *, /, % (binary operators because they use 2 variables)

    cout << 5 + 2 << endl;

    // The result is an integer number so wrong answer.
    cout << 5 / 2 << endl;

    // If you give a decimal point number you will get the right answer (float)
    cout << 5.0 / 2.0 << endl;

    // The modulo (%) give the reminder of 5 / 2 so 1.
    cout << 5 % 2 << endl;

    // Unary operators : ++ increment, -- decrement, coma "," is also 
    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    // In one line.
    int counter2 = 7;
    cout << counter2++ << endl; // This is a post increment. The increment is done after the cout.
    cout << counter2 << endl;
    cout << ++counter2 << endl; // This is a pre increment.
    cout << ----counter2 << endl; // You can spam incrementation or decrementation.

    system("cls"); // Clear console.
    

    // Relational operators : < smaller then, > bigger then, <= smaller or equal, >= bigger or equal, == equal, != different.
    int a = 5, b = 5;
    cout << (a != b); // The result is 0 as False.
    cout << (a != 6); // The result is 1 as True.
    cout << (a <= b); // The result is 1 as True.
    system("cls");

    // Logical operators : && logical and, || logical or, ! not operator

    int c = 8;
    cout << (a == 5 && c == 5) << endl; // The result is 0 as False.
    cout << (a == 5 || c == 5) << endl; //The result is 1 as True.
    cout << !(a == 5 || c == 5) << endl; // The result is 0 as False.

    // Priority is : Arithmetic > Relational > Logical. Arithmetic has the better priority to Logical wich has the worst priority.

    cout << (a == 5 && b == 5+3); // The result is 0 as True because the arithmetic opetation is done with the highest priority.
    system("cls");

    // Assignement operators : = assign, += add an assign, -= , /=, %=
    int x = 5;
    cout << x << endl;
    x += 7;
    cout << x << endl;
    x -= 1;
    cout << x << endl;
    x *= 2;
    cout << x << endl;
    x /= 2;
    cout << x << endl;

    system("cls");

    // Exercice : What is going to be the result of the following lines?
    int t = 5, u = 4;
    cout << t + (u++) << endl; // 9
    cout << (--t) + u << endl; // 9

    cout << !(true && false) << endl; // The result will be 1 as true. 
    cout << (true && false || true) << endl; // The result will be 1 as true. 

    int n = 7;
    cout << (++n < 9 && n + 2 >= 10) << endl; // The result will be 1 as true.

    int y = 3;
    cout << (y == y++) << endl; // The result will be 1 as true.

    float z = 8;
    z += 2;
    cout << z << endl; // cout = 10
    z /= 2;
    cout << z << endl;// cout = 5


    system("pause>0"); // Clear random text at the end of the console.
}


