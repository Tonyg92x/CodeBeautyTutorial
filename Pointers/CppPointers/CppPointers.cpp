// CppPointers  :   Introduction to pointers. Powerfull knowledge to control the machine.
// Author :         Anthony Guay
// Date :           4/5/2021
// Credit :         CodeBeauty youtube tutorial @8:40
//                  https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty
//

#include <iostream>
using namespace std;

int main()
{
    //  A pointer is a container like a variable. They don't contain a value, they contain a memory location (0x...) 

    int n = 5;
    cout << "n value = " << n << endl;

    // Here n contain the value 5. Because it contain something, it means that it has a place were it is saved in memory.
    // How can we know were the value is stock ? we put '&' before the value.

    cout << "Adresse : 0x" << &n << endl;

    // Creating a pointer

    int* ptr = &n;

    // Now our pointer has the adress of the n value.

    cout << "Adresse : 0x" << ptr << endl;

    // To acces a value that a pointer is holding we need to use :

    cout << "n value = " << *ptr << endl;

    // To change a value of a pointer

    *ptr = 10;

    cout << "n value = " << n << endl;

    // The pointer must be the same data type that the value is.

    // Common error of beginners : unitialized local variable (no adress)

    /*
    int* ptr2;
    *ptr2 = 7;
    */

    // You cant do that here cause it dosent have an adress. You first need to create
    // the repository with a creation of a variable, like that :

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    
    cout << "v = " << v << endl;

    system("pause>0");
}

