# include <iostream>
#include "Fonctions.h"
#include <string>
#include <fstream>
using namespace std;

void OptionChooser(int& option) // Fonction called to let the user pick an option
{
	int ok = 0;
	option = 0;
	while (option != 1 && option != 2 && option != 3)
	{
		cout << "Plese pick an option :" << endl << "\t 1 ) Create a new Quizz \n \t 2 ) Answer a quizz \n \t 3 ) Quit" << endl;
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
	}
}

void QuizzCreation()
{
	system("cls");
	fstream myFile;
	string title;
	string question;
	string option1;
	string option2;
	string option3;
	string answer;
	int questionCounter = 1;
	string areYouDone;
	bool done = false;

	// a )  Ask the user the title of his quizz. Add.txt to it.
	cout << "How would you like to name your quizz ?" <<endl ;
	cin.get();
	getline(cin, title);
	
	/*   b ) Put the question and the option on one line in the text file and 
    *        put the answer on the next line. Loop until the user choose to 
    *        stop writing question. Get a counter to know how much question there 
    *        is for the final score.
	*/
	cout << "Oh ! " << title << " is a nice name! \n";
	title += ".txt";
	myFile.open(title, ios::out);
	while (done == false)
	{
		cout << "What is your question number " << questionCounter << " ?" << endl;
		getline(cin, question);
		cout << "What is the first possible answer that you want to give to the user ?" << endl;
		getline(cin, option1);
		cout << "What is the second possible answer that you want to give to the user ?" << endl;
		getline(cin, option2);
		cout << "What is the third possible answer that you want to give to the user ?" << endl;
		getline(cin, option3);
		cout << "Wich option is the right option ? (1/2/3)" << endl;
		getline(cin, answer);
		myFile << question << "\n" << option1 << "\n" << option2 << "\n" << option3 << "\n";
		myFile << answer << "\n";
		questionCounter++;
		cout << "Do you want to add another question to que quizz ? (yes/no)" << endl;
		getline(cin, areYouDone);
		if (areYouDone == "no" || areYouDone == "No")
		{
			done = true;
		}
	}
	// c )  When the user is done inputing questions, write end on a line(loop condition)
    //      and input the value of the counter on the last line of the file to know the score / counter.
	questionCounter--;
	myFile << "end \n";
	myFile << questionCounter;
	myFile.close();
	system("pause");
	system("cls");
}

void QuizzPlay()
{
	// b ) Save the last line as total and do the math to get the result in % with the score value.  

	string title;
	string line = "start";
	string question;
	string possibility1;
	string possibility2;
	string possibility3;
	string answer;
	string userAnswer;
	fstream myFile;
	double userScore = 0;
	double totalScore;


	// a ) Read the file and loop for every question until it reach end line. If the answer is right
	//	   increment score. If it isn't save the number of the question to know wich one was wrong.

	cout << "What is the title of the Quizz that you want to answer ?" << endl;
	cin.get();
	getline(cin, title);
	cout << "Cool, let's start the " << title << " quizz." << endl;
	title += ".txt";
	myFile.open(title, ios::in);
	if (myFile.is_open())
	{
		getline(myFile, line);
		while (line != "end ")
		{
			question = line;
			getline(myFile, line);
			possibility1 = line;
			getline(myFile, line);
			possibility2 = line;
			getline(myFile, line);
			possibility3 = line;
			getline(myFile, line);
			answer = line;
			cout << question << "\n \t 1)" << possibility1 << "\n \t 2)" << possibility2 << "\n \t 3)" << possibility3 << "\n" <<
				"Enter the number (exemple 1/2/3) :" << endl;
			getline(cin, userAnswer);

			if (userAnswer == answer)
			{
				userScore++;
				cout << "Good answer!" << endl;
			}
			else
			{
				cout << "The right answer was : " << answer << endl;
			}

			getline(myFile, line);
		}

		getline(myFile, line);
		totalScore = stod(line);
		userScore = (userScore / totalScore) * 100;

		cout << "Your'e score in the " << title << " test is : " << userScore << " %." << endl;
		system("pause");
		system("cls");
	}


}