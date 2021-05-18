// HeaderFiles:		
// Author :			Anthony Guay
// Date :			18/5/2021
// Credit :			CodeBeauty youtube tutorial @https://www.youtube.com/watch?v=qaGzc56Rekg&ab_channel=CodeBeautyCodeBeauty

#include <iostream> // input and output implementation.
#include "Food.h"

using namespace std;

int main()
{

	// In C++ , every cpp file are compiled and create an obj file.
	// However, they dosent know what other cpp file contain.
	// When you use a header, you enable every obj file to get in one obj file.

	// You always need to write a fonction a the start of your code if you want
	// to use that fonction and declare it. But if you have multiple cpp file 
	// wich use the same declaration, you will get an error because when obj
	// try to implement every obj file in one, he won't know wich declaration
	// to use.

	// If you try to use the deffinition more then one time it will cause
	// an error to.

	// To be abble to use the same fonction in more then one cpp file, we use
	// header file. To use it, you create the fonction in a cpp file with
	// the same name of the header file. Then you link the fonction to the header
	// file. After that, you will be ablle to include the header in any cpp file.

	cout << "Today I'll eat " << RecommendMeAFood('a') <<endl;
	GetPizzaRecipe();
	cin.get();
}
