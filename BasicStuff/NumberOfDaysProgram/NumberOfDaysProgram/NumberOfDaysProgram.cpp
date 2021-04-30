// NumberOfDaysProgram :    Program that checks the number of days in a month.
// Author :                 Anthony Guay
// Date :                   4/26/2021
// Credit :                 CodeBeaty youtube channel tutorial @ 3:26 https://www.youtube.com/watch?v=GQp1zzTwrIg

#include <iostream>
using namespace std;

int main()
{
    //(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) help to know if its a leap year.
    int year, month;
    cout << "Year, month: ";
    cin >> year >> month;

    // February special month
    switch (month)
    {
    case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        cout << "29 days month." << endl : cout << "28 days month."; break;

    // 30 days month
    case 4:
    case 6:
    case 9:
    case 11: cout << "30 days month."; break;

    // 31 days month
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << "31 days month."; break;
    default: cout << "Not valid!";
    }
    system("pause>0");
}


