// LastName:    Guay
// FirstName:   Anthony
// Date:        4/16/2021
// Program:     Transform a text into a code of ASCII number.
// Credit:      CodeBeautyChannel tutorial link : https://www.youtube.com/watch?v=fxFcG7Z2J0Q

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void RemoveSpaces(char * p)
{
    if (NULL == p)
        return;

    int n = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] != ' ')
        {
            p[n++] = p[i];
        }
    }
    p[n] = '\0';

}

int main()
{
    string text;
    string again;

    // 1.   Create a char variable for each character so people can enter unlimited number of character.
    cout << "Welcome to the text to ASCII tool! \n \nThis program was made to change a text into ASCII code.\nPlease enter the text you want to transform into ASCII code without any space character." << endl;
    cin >> text;
    for (char& c : text) {
        if (c != ' ')
        {
            cout << int(c) << " ";
        }
    }

    cout << "\nDo you want to change more text to ASCII? (yes or no)" << endl;
    cin >> again;

    while (again == "yes" or again == "Yes")
    {
        cout << "All right ! What text would you like to transform into ACII numbers? (don't forgert to omit space between character)" << endl;
        cin >> text;
        for (char& c : text) {
            if (c != ' ')
            {
                cout << int(c) << " ";
            }
        }
        cout << "\nDo you want to change more text to ASCII? (yes or no)" << endl;
        cin >> again;
    }

    system("pause>0");
}

