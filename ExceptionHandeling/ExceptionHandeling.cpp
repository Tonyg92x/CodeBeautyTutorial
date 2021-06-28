// ExceptionHandeling : Learning how to handle errors with a printer simulator
// Author :             Anthony Guay
// Date :               18/6/2021
// Credit :             CodeBeauty Tutorial @ https://www.youtube.com/watch?v=kjEhqgmEiWY&ab_channel=CodeBeautyCodeBeauty

#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
	string _name;
	int _avaiblePaper;

public:
	Printer(string name, int paper)
	{
		_name = name;
		_avaiblePaper = paper;
	}
	void Print(string txtDoc)	
	{
		int requiredPaper = txtDoc.length() / 10; // If one sheet have a limit of 10 character

		if (requiredPaper > _avaiblePaper)
		{
			throw "No paper"; // Throw exception, it stop the execution of the program if not handled.
		}

		cout << "Printing... " << txtDoc << endl;
		_avaiblePaper -= requiredPaper;
	}

};

int main()
{
	Printer myPrinter("HP DeskJet 1234", 10);

	try // This is what you can use to handle an exception
	{
		myPrinter.Print("Hello, my name is Tony. I want to be a Game Developper.");
		myPrinter.Print("Hello, my name is Tony. I want to be a Game Developper.");
		myPrinter.Print("Hello, my name is Tony. I want to be a Game Developper.");
	}
	catch (const char * txtException)
	{
		cout << "Exception : " << txtException << endl;
	}

	// We can handle exception with other data value like an integer. You would by exemple throw 101 then 
	// give a txt option for any exception in the catch block. Im pretty sure it reduce the ram usage if you
	// use integer value because you multiply every time you use a fonction a const char wich use more data space.

	// You can use default exception to. It will catch any type of exception :

	/*
	*	catch (...)
	*	{
	*		cout << "Exception happenned!" << endl;
	*	}
	*/

	system("pause>0");
	return 0;
}

