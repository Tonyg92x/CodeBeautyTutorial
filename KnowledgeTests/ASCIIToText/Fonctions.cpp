#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include "Fonctions.h"

using namespace std;

void OptionChooser(int& option) // Fonction called to let the user pick an option.
{
	int ok = 0;
	option = 0;
	while (option != 1 && option != 2 && option !=3)
	{
		cout << "Welcome in this ASCII text file creator and reader.\nWich option do you want to use ?\n \t 1) Create a text file\n \t 2) Read a text file" << endl;
		cout << "\t 3) Quit \n";
		while (!(cin >> option))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter a valid option. Try again: " << endl;
		}
		if (option != 1 && option != 2 && option != 3)
		{
			cout << "Please enter a valid option. Try again: " << endl;
			system("pause");
		}
		system("cls");
	}
}

void WriteOption() // Fonction that let the user Write a text file encrypted in ASCII
{
	system("cls");
	string title;
	string text;
	fstream myFile;

	// a) input a string with the title and one with the text
	cout << "How do you want to name your file ?" << endl;
	cin.get();
	getline(cin, title);
	title += ".txt";

	cout << "Enter the text that you want to transform in ASCII format : \n";
	getline(cin, text);

	// b) transform this text into an ASCII encoding version and save it into a new text file
	myFile.open(title, ios::app);
	if (myFile.is_open())
	{
		for (char& c : text)
		{
			myFile << int(c) << " ";
		}
		myFile.close();
	}

	system("pause");
	system("cls");
}

void ReadOption()
{
	string ASCII;
	string text;
	string title;
	fstream myFile;

	//  a) open a text file encoded in ASCII encryption
	cout << "What is the name of the file you want to read ?" << endl << "Warning : Don't enter the .txt and the file " <<
		"must be in the right directory." << endl;
	cin.get();
	getline(cin, title);
	title += ".txt";
	myFile.open(title, ios::in);

	//  b) save that encryption in a string
	if (myFile.is_open())
	{
		string line;
		while (getline(myFile, line))
		{
			ASCII += line;
		}
		myFile.close();
	}

	//  c) Transform string into the actual text.
	int found = 1;		// need a default value
	string character;	// integer of a char so the ASCII form in string
	int lettre;			// Character transform into int for char(lettre)
	bool again = true;  // Loop value (default true until it dosent find " "

	while (again == true)
	{
		found = ASCII.find(" ");				// Look for a space to know if there is one other character
		character = ASCII.substr(0 , found);	// Select the character
		ASCII.replace(0, found+1, "");			// Remove the character of the string
		lettre = stoi(character);				// Transform the character number in int (ssteam library)
		cout << char(lettre);					// Write the character in the console
		found = ASCII.find(" ");				// Loop verification (if there is no space or character found is set to -1)
		if (found == -1)
		{
			again = false;
		}
	}
	cout << endl;

	system("pause");
	system("cls");
}