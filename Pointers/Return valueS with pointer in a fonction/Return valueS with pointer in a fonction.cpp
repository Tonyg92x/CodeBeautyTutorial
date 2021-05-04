// Return valueS with pointer in a fonction :   The title say it all.
// Author :                                     Anthony Guay    
// Date :                                       4/5/2021
// Credit :                                     CodeBeauty Youtube tutorial @9:19
//                                              https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1&ab_channel=CodeBeauty

#include <iostream>
using namespace std;

int getMin(int number[], int size)
{
    int min = number[0];
    for (int i = 1; i < size; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
    }
    return min;
}

int getMax(int number[], int size)
{
    int max = number[0];
    for (int i = 1; i < size; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }

        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }
}

int main()
{
    int numbers[6] = { 1,3,4,7,12,-5 };
    cout << "Min is " << getMin(numbers, 6) << endl;
    cout << "Max is : " << getMax(numbers, 6) << endl;


    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 6, &min, &max);
    cout << "Min is : " << min << " " << endl << "Max is : " << max << endl;

    // If you pass by reference (adresses) you can change values in a function without using return.

    system("pause>0");
    return 0;
}
