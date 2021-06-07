// QuizzApplication :   Quizz application that use file to read question and answer
// Author :             Anthony Guay
// Date :               28/5/2021
// Credit :             CodeBeauty @https://www.youtube.com/watch?v=EaHFhms_Shw

#include <iostream>
#include "Fonctions.h"
using namespace std;
  
int main()
{
    /*
    *  QuizzApplication app :
    *                           
    *                           Build a quizz application that read question and answers from a file
    * 
    *                           1 ) Option to choose between creating a quizz or answering one.
    * 
    *                           2 ) Creating a quizz : 
    * 
    *                                   a )  Ask the user the title of his quizz. Add .txt to it.
    * 
    *                                   b )  Put the question and the option on one line in the text file and 
    *                                        put the answer on the next line. Loop until the user choose to 
    *                                        stop writing question. Get a counter to know how much question there 
    *                                        is for the final score.
    *
    *                                   c )  When the user is done inputing questions, write end on a line (loop condition)
    *                                        and input the value of the counter on the last line of the file to know the score/counter.
    * 
    *                           3 ) Answer a quizz :
    *               
    *                                   a ) Read the file and loop for every question until it reach end line. If the answer is right
    *                                       increment score. If it isn't save the number of the question to know wich one was wrong.
    *                                    
    *                                   b ) Save the last line as total and do the math to get the result in % with the score value.                                 
    */


    // Loop of the main fonction : 3 options wich is Create a quizz, respond to a quizz and quit
    cout << "Welcome in the Quizz application." << endl;
    int option = NULL;
    
    while (option != 3)
    {
        OptionChooser(option);

        switch (option)
        {
        case 1: QuizzCreation(); break;

        case 2: QuizzPlay();  break;

        break;
        }
    }
    system("cls");
    cin.get();
}
