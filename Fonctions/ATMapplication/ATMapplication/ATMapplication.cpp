// ATMapplication : Application that simulate an ATM machine.
// Author :         Anthony Guay
// Date :           4/28/2021
// Credit :         CodeBeaty tutorial @6:48
//                  https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Leave" << endl;
    cout << "************************" << endl;
}

int main()
{
    // check balance, depost, withdraw, show menu
    int option;
    double balance = 500;

    do {
        showMenu();
        cout << "Option :";
        while (!(cin >> option))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again. " << endl << "Option :";
        }
        system("cls");
        switch (option)
        {
        case 1: cout << "Balance is : " << balance << " $." << endl; break;
        case 2: cout << "Deposit amount : ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount : ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money." << endl;
            break;

        case 4: cout << "Press a key to leave the program."; break;
        }
    } while (option != 4 );
    system("pause>0");
}
