// Pointers and arrays :    
// Author :                 Anthony Guay
// Date :                   4/5/2021
// Credit :                 CodeBeauty youtube tutorial @9:06
//                          https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty

#include <iostream>
using namespace std; 

int main()
{
    int luckyNumber[5];


    //cout << luckyNumber << endl;
    // It give the first element of the array. Proof:

    //cout << &luckyNumber[0] << endl;

    //cout << luckyNumber[2] << endl;
    

    // Adress of the first element + 2 = adress of the third element. * in front to get the value of the adress.
    
    //cout << *(luckyNumber + 2) << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number : ";
        cin >> luckyNumber[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << luckyNumber[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << *(luckyNumber + i) << "  ";
    }
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << (luckyNumber + i) << "  ";
    }
    cout << endl;

    // What happen if you cout something that dosent belong to our lucky number ?

    for (int i = 0; i <= 5; i++)
    {
        cout << *(luckyNumber + i) << "  ";
    }
    cout << endl;

    // We have accessed someone else memory space.

    system("pause>0");
    return 0;
}
