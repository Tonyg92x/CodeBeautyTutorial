// If/Else  :   Learning C++ if and else statement
// Author   :   Anthony Guay
// Date     :   4/20/2021
// Credit   :   CodeBeauty Youtube learning videos @ 1:18: https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&index=1

#include <iostream>
using namespace std;

int main()
{
	// User enters integer number

	int number;
	
	cout << "Welcome to a little program that take a integer number and look if it's an even number or an odd one." << endl;
	cout << "Please enter your integer number :";
	cin >> number;
	
	// Program write out if that number is even or odd
	if (number % 2 == 0)
	{
		cout << "Your number is even.";
	}
	else
	{
		cout << "Your number is odd.";
	}
   
	system("pause>0");
}

