// RectangleShape :		Create a rectagle with a symbol (dimension and symbol entered by user).
// Author :				Anthony Guay
// Date :				4/28/2021
// Credit :				CodeBeaty tutorial @ 5:21 https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PLp1a4c4ujmk-SMeujXJcdpazIx0NAzThY&ab_channel=CodeBeauty
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int height, width;
	char symbol;

	cout << "Height : ";
	cin >> height;
	cout << endl;
	cout << "Width : ";
	cin >> width;
	cout << endl;
	cout << "Symbol : ";
	cin >> symbol;
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}
	system("pause>0");
}
