// Multidimensional dynamic arrays :    Array wich contrain adress of an other array.
// Author :                             Anthony Guay
// Date :                               5/13/2021
// Credit :                             CodeBeauty youtube tutorial @9:48
//                                      https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty


#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "rows, cols:";
    cin >> rows >> columns;

    // Create a pointer to a pointer :

    int** table = new int*[rows];

    // For each row, create a pointer to an array.

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[columns];
    }

    table[1][2] = 88;

    cout << table[1][2];

    // Unallocate the second degree first, because if you unallocate the first
    // degre we lose pointers to the second.

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] table;
    }

    table == NULL;

    system("pause>0");
    return 0;
}
