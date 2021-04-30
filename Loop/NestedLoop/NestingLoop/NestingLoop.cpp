// NestingLoop :    Combine and nest while and for loop with an average calculator with grade from 1 to 5.
// Author :         Anthony Guay 
// Date :           4/28/2021
// Credit :         CodeBeauty @4:58 https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty
//

#include <iostream>
using namespace std;

int main()
{

    int grade, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        do {
            cout << "Enter grade " << i + 1 << " : ";
            cin >> grade;
        } while (grade < 1 || grade > 5);
        sum += grade;
    }

    cout << "Sum = " << sum << endl;
    cout << "Avg grade = " << sum / 3.0 << endl;
    system("pause>0");
}

