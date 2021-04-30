// WhileLoop :  While loop learning
// Author :     Anthony Guay
// Date :       4/27/2021
// Credit :     CodeBeauty tutorail @3:40 https://www.youtube.com/watch?v=GQp1zzTwrIg

#include <iostream>
using namespace std;

int main()
{
    // Write out all the numbers between 100-500 that are divisible by 3 and 5.

    int counter = 100;

    while (counter <= 500)
    {
        if ((counter % 3 == 0) && (counter % 5 == 0))
            cout << counter << " is divisible by 3 and 5." << endl;

        counter += 1;
    }
    system("pause>0");
}

