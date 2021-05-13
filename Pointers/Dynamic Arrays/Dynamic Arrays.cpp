 // Dynamic Arrays :    Create/change arrays at runtime
 // Author :            Anthony Guay
 // Date :              13/5/2021
 // Credit :            CodeBeauty tutorial @9:34
 //                     https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

int main()
{

    /*
    *   What does an array    :     It stock an element after an other somewhere
    *                               in memory. (continuous memory)
    * 
    *   Advantage of an array :     Acces the next array will be fast cause it is
    *                               close from the precedent object in the array.
    * 
    *   Disavantage :               What happen if you want to insert or delete
    *                               one element in the middle of the array 
                                    whitout breaking the continuousness ?
                                    It create an other data adresse. If you use
                                    pointers, you can change the value of an 
                                    adress instead of creating a new one.
    * 
    */


    int myarray[5]; // You always need to create a constant for the array.
                    // You can't do the following :

    /*
    * int size;
    * cout << "Size :";
    * cin >> size;
    * int myArray[size];
    */

    // You can do it with a pointer. It create the array in runtime.
    int size;
    cout << "Size of the array : ";
    cin >> size;
    int* myArray = new int[size];

    // To add element in an array :

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] = ";
        cin >> myArray[i];
    }

    // To write out :
    for (int i = 0; i < size; i++)
    {
        cout << myArray [i] << " ";
    }
    cout << endl;

    // Acces with pointer :

    for (int i = 0; i < size; i++)
    {
        cout << *(myArray + i) << " ";
    }
    cout << endl;

    // Important :
    //      When you allocate in memory using int* myArray = new int[size]
    //      You need to unallocate that memory when you don't need it anymore.

    delete[]myArray;
    myArray = NULL; // Since you have delete the memory in program, you need
                    // to set the adress to NULL. The delete[]Myarray; let other
                    // program use the memory so you want to break the link to
                    // that memory that could create accidental crash.

    system("pause>0");
}
