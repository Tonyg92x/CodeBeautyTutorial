// Factorial(ForLoop) :		Calcul the factorial of a number.
// Author :                 Anthony Guay
// Date :                   4/27/2021
// Credit :                 CodeBeaty tutorial @4:40 https://www.youtube.com/watch?v=GQp1zzTwrIg

#include <iostream>
using namespace std;

int main()
{
	// The factorial number of a number
	// 6 != 1 * 2 * 3 * 4 * 5 * 6 = 720

	int number, factorialNumber = 1;
	cout << "Number: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		factorialNumber *= i;
	}

	cout << "The factorial of " << number << " is : " << factorialNumber << endl;
	system("pause>0");
}

