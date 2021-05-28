// ReadWrite TextFile:      Learning usage of text file
// Author :                 Anthony Guay
// Date :                   5/20/2021
// Credit :                 CodeBeauty tutorial @https://www.youtube.com/watch?v=EaHFhms_Shw&ab_channel=CodeBeautyCodeBeauty

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream myFile;
    myFile.open("saldina.txt", ios::out); // Write
    if (myFile.is_open())
    {
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    }

    myFile.open("saldina.txt", ios::app); // append if you dont you
    // overwrite
    if (myFile.is_open())
    {
        myFile << "Hello2\n";
        myFile.close();
    }

    myFile.open("saldina.txt", ios::in);
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }

    cin.get();
}

