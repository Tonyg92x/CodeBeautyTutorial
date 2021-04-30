// InterviewQuestion1 : Exercice about a question that could be asked in a job interview.
// Author :             Anthony Guay
// Date :               4/22/2021
// Credit :             CodeBeaty tutorial video @ 2:21 https://www.youtube.com/watch?v=GQp1zzTwrIg


#include <iostream>
using namespace std;

int main()
{
    // Program for swapping values of two variables with a third variable.

    int a = 20;
    int b = 10;
    int temp = a;
    a = b;
    b = temp;
    cout << " The variable a = " << a << " and the variable b = " << b << "." << endl;
    
    // Program for swapping values of twi variable without a third variable.
    a = 20999;
    b = 109999;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << " The variable a = " << a << " and the variable b = " << b << "." << endl;

    system("pause>0");
}
