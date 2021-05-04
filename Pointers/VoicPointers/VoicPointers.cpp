// VoicPointers : This file contains the 'main' function. Program execution begins and ends there.
// Author :         Anthony Guay
// Date :           5/4/2021
// Credit :         CodeBeauty tutorial @8:51
//                  https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty


#include <iostream>;
#include <string>;
using namespace std;

void printNumber(int* numberPtr)
{
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr)
{
    cout << *charPtr << endl;
}

// void pointer :

void print(void* ptr, char type)
{
    // We can then use any date type with the same fonction.
    // Carefull here, the compilor dosent know the error here cause he dosent
    // what data type we are trying to handle. If you enter a false data type,
    // it will run but dosent work. It can make an error hard to find.

    switch (type)
    {
    case 'i': // Handle integer
        cout << *((int*)ptr) << endl; break;
    case 'f': // Handle float
        cout << *((float*)ptr) << endl; break;
    case 'd': // Handle double
        cout << *((double*)ptr) << endl; break;
    case 'c': // Handle char
        cout << *((char*)ptr) << endl; break;
    case 's': // Handle string
        cout << *((string*)ptr) << endl; break;
    break;
    }
}

int main()
{
    // A void pointer is a pointer that can hold a variable of any data type. 
    // It has a limitation : 
    //          you can not dereference a void pointers

    int number = 5;
    printNumber(&number);

    char letter  = 'a';
    printLetter(&letter);

    double dauble = 5.12;
    float allo = 1.213123;
    string phrase = "Salut toi.";

    print(&number, 'i');
    print(&letter, 'c');
    print(&dauble, 'd');
    print(&allo, 'f');
    print(&phrase, 's');

    system("pause>0");
}
