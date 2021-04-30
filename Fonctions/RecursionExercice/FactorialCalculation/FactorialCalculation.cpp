// FactorialCalculation :   Program to exercice recursive fonction with factorial calcul.
// Author :                 Anthony Guay
// Date :                   4/29/2021


#include <iostream>
using namespace std;

float recusriveFonction(float compteur, float number)
{
    if (compteur == number)
    {
        return compteur;
    }

    return compteur * recusriveFonction(compteur + 1 , number);
    
}

int main()
{
    float number, compteur = 1;

    cout << "Welcome to my factorial calculator ! \nPlease" <<
        " enter the number that you want to factor : ";
    cin >> number;

    cout << "Factorial of " << number << " is : " <<
        recusriveFonction(compteur, number);

    system("pause>0");
}