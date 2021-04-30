// GenericFonctions :   Generic fonctions and templates tutorial
// Anthor :             Anthony Guay
// Date :               4/29/2021
// Credit :             CodeBeaty youtube tutorial @7h
//                      https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

// Fonction overloading to get the swap fonction avaible for a in
// and a char. 

// The problem here is that if we want to use others data type,
// we have to write the Swap fonctions for every data type, wich
// create a lot of redundancy (repeat code).

// To avoid this problem we are going to use a Generic fonction.

// To do so, you create a template like this :

template <typename T>
// template <class Type> would work to.

// The T is now a generic data type wich mean you can use any
// datatype.

void Swap(T& a, T& b) // Swapping integer
{
    a = a + b;
    b = a - b;
    a = a - b;
}

/* 
We can then delete this fonction

void Swap(char& a, char& b) // Swapping character
{
    a = a + b;
    b = a - b;
    a = a - b;
}

*/


// You then have to put the data type in <int> bracket in the
// fonction call before the () to let the fonction know wich
// datatype you will use.

int main()
{

    // Integer swap example
    cout << "Integer swap example." << endl;
    int a = 9, b = 6;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    // Character swap example
    cout << endl << "Character swap example." << endl;
    char c = 'a', d = 'b';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;
 

    // Double swap example
    cout << endl << "Double swap example." << endl;
    double e = 3.33, f = 4.44;
    cout << e << " - " << f << endl;
    Swap<double>(e, f);
    cout << e << " - " << f << endl;

    system("pause>0");
}

