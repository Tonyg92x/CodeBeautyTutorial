// RecursionRecursiveFonctions :    What is recursion and how it works
// Autor :                          Anthony Guay
// Date :                           4/29/2021
// Credit :                         CodeBeauty tutorial @ 7h14
//                                  https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

template <typename T>

void Swap(T& m, T& n)
{
    m = m + n;
    n = m - n;
    m = m - n;
}

int recursive_sum(int m, int n)
{

    // Every recursion need this if statement to avoid an infinite loop
    if (m == n)
    {
        return m;
    }

    // Recursive fonction to avoid the loop.
    return m + recursive_sum(m + 1, n);
    // At the end, m will = sum of every m that has passed the fonction.
}

int main()
{
    // It is a fonctions that invoke itself (recursive fonction)

    // For example, we are going to Sum numbers between m-n

    int m, n; // m need to be smaller then n. If it isnt you can swap values.

    cout << "Enter a integer number : ";
    cin >> m;
    cout << "Enter an other integer number : ";
    cin >> n;

    // Swap if m is greater then n.

    if (m > n)
    {
        Swap<int>(m, n);
    }

    cout << "Sum = " << recursive_sum(m, n);

    /*
                Used recursive_sum instead.
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    */

    system("pause>0");
}

