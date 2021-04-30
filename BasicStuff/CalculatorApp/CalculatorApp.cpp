// CalculatorApp 
// Author :			Anthony Guay
// Date :			4/22/2021
// Credit :			CodeBeauty tutorial @3h https://www.youtube.com/watch?v=GQp1zzTwrIg


#include <iostream>
using namespace std;

int main()
{
	float number1, number2;
	char operation;
	cout << "**CodeBeaty calculator**" << endl;
	cout << "Enter the equation you want to calculate in the form: Number1, Operator, Number2." << endl;
	cin >> number1 >> operation >> number2;

	switch (operation)
	{
	case '-':cout << number1 << " " << operation << " " << number2 << " = " << number1 - number2 << endl; break;
	case '+':cout << number1 << " " << operation << " " << number2 << " = " << number1 + number2 << endl; break;
	case '*':cout << number1 << " "	<< operation << " " << number2 << " = " << number1 * number2 << endl; break;
	case '/':cout << number1 << " " << operation << " " << number2 << " = " << number1 / number2 << endl; break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)number1 == number1);
		isNum2Int = ((int)number2 == number2);

		if (isNum1Int && isNum2Int)
		{
			cout << number1 << " " << operation << " " << number2 << " = " << (int)number1 % (int)number2 << endl; break;
		}
		else
		{
			cout << "Not valid, you need 2 integer number to use modulo." << endl;
		}
	default: cout << "Not a valid operation." << endl; break;
		
	}

	system("pause>0");
}

