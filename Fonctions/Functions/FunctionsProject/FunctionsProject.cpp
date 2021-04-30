// FunctionsProject :   Learning fonctions
// Author :             Anthony Guay
// Date :               4/28/2021
// Credit :             CodeBeauty tutorial @5:44
//                      https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

void myfunction(); // Right click go to definition or click f12
                   // if you want to go to the fonction.

void introduceMe(string firstname, string lastName, int age);

bool isPrimeNumber(int number);

int main()
{
    cout << "Hello from main() \n";
    myfunction();
    cout << endl;
    string FirstName, LastName;
    int age;

    // Argument fonction
    cout << "Firstname : ";
    cin >> FirstName;
    cout << "Lastname : ";
    cin >> LastName;
    cout << "Age : ";
    cin >> age;
 
    introduceMe(FirstName, LastName, age);


    // Prime number or not (return fonction)
    // A prime number is a number that divise oonly  by 1 and 0.

    int number;
    bool isPrimeFlag=true;

    cout << "Number: ";
    cin >> number;

    isPrimeFlag = isPrimeNumber(number);

    if (isPrimeFlag)
        cout << "The number " << number << " is a prime number." << endl;
    else
        cout << "Is not a prime number.";

    // Look for every prime Number.
    int counter = 0;
    for (int i = 1; i <= 100000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime) 
        {
            cout << i << " is prime number" << endl;
            counter += 1;
        }

    }
    cout << "There is " << counter << " prime number between 1" <<
        " and 100 000." << endl;
    system("pause>0");
}

// Fonction example

void myfunction()
{
    cout << "Hell0 from function()" << endl;
}


// Fonction with parameters

void introduceMe(string firstname, string lastName, int age)
{
    cout << "My name is " << firstname << " " << lastName <<
        " and I am " << age << " years old." << endl;
}

// Fonction with a return

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}