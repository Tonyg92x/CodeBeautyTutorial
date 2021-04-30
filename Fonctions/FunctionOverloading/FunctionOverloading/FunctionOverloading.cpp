// FunctionOverloading :    
// Author :                 Anthony Guay
// Date :                   4/28/2021
// Credit :                 CodeBeauty tutorial @ 6:37
//                          https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty


#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(4, 3) << endl; // When there is overflow of a function
                               // you can choose wich one to use
    cout << sum(4.4, 3.3) << endl;

    cout << sum(4.4, 3.3, 2.2) << endl;
    system("pause>0");
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

float sum(float a, float b, float c)
{
    return a + b + c;
}
