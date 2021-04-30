// Nested_If_Else   :   Learning Nested If/Else
// Author           :   Anthony Guay
// Date             :   4/20/2021
// Credit           :   CodeBeauty youtube video @1:36 : https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1
//

#include <iostream>
using namespace std;

int main()
{
    // User enters side lengths of a triangle (a,b,c)
    float a, b, c;

    cout << "Welcome to a little program that will get in as arguments the three side lengths of a triangle and will tell the type of triangle it is." << endl;
    cout << "Please enter the length of the first side of the triangle." << endl;
    cin >> a;
    cout << "Please enter the length of the second side of the triangle." << endl;
    cin >> b;
    cout << "Please enter the length of the third side of the triangle." << endl;
    cin >> c;
    
    // Program should write out wether that triangle is equilateral, isesceles or scalene
    
    if (a == b && b == c)
    {
        cout << "The triangle is equilateral." << endl;
    }
    else if (a != b && b != c && c != a)
    {
        cout << "The triangle is scalene." << endl;
    }
    else
    {
        cout << "The triangle is isesceles." << endl;
    }
    system("pause>0");
}


