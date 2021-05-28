// ASCIIToText :	Knowledge testing
// Author :         Anthony Guay
// Date :           23/5/2021
// Credit :         CodeBeauty test @https://www.youtube.com/watch?v=EaHFhms_Shw&ab_channel=CodeBeautyCodeBeauty 

#include <iostream>
#include "Fonctions.h"
using namespace std;

/* Create a program that will :	
* 
*		1)	Let the user chose between inputing a text file or read a text file
* 
*		2)	for inputing a text file :
*			a) input a string with the text
*			b) transform this text into an ASCII encoding version and save it into a new text file
* 
*		3)	for reading a text file :
*			a) open a text file encoded in ASCII encryption
*			b) save that encryption in a string
*			c) transfer that encryption into text
*			d) read the text
*/

int main()
{
	int option = NULL;
	string phrase;

	while (option != 3)
	{
		OptionChooser(option);

		switch (option)
		{
		case 1: WriteOption(); break;

		case 2: ReadOption(); break;

		}
	}
	system("cls");
	cin.get();
	
}
