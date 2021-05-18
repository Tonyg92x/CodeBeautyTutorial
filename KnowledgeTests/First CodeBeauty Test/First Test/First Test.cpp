// First Test :     Quizz application
// Author :         Anthony Guay
// Date :           14/5/2021

#include <iostream>
using namespace std;


void NewGame(int &wronganswer)
{
    wronganswer = 0;
}

struct question
{
    string question;
    string answer[3];
    int valid;
};

int main()
{
    // Welcome to the application print

    cout << "Welcome to my football quizz application! \nHere you will be abble";
    cout << " to test your knowloedge in NFL football." << endl;
    cout << "--------------------------------------------------------------" << endl;

    // Variable to keep track of the result.
    int wrongAnswer;
    int numberOfQuestions = 5;
    int userAnswer;

    // Variable to know if the player want to play again.
    string again;

    // Questions creation;

    question question1;
    question1.question = "Wich NFL player has the most wins?";
    question1.answer[0] = "1. Brett Favre";
    question1.answer[1] = "2. Peyton Manning";
    question1.answer[2] = "3. Tom Brady"; //
    question1.valid = 3;

    question question2;
    question2.question = "Wich NFL player has the most sack of NFL history?";
    question2.answer[0] = "1. Kevin Greene";
    question2.answer[1] = "2. Bruce Smith"; //
    question2.answer[2] = "3. Reggie White";
    question2.valid = 2;

    question question3;
    question3.question = "Wich NFL team has the better winning percentage ?";
    question3.answer[0] = "1. New England Patriots";
    question3.answer[1] = "2. Chicago Bears";
    question3.answer[2] = "3. Dallas Cowboys"; //
    question3.valid = 3;

    question question4;
    question4.question = "Who is the touchdown leader in NFL history?";
    question4.answer[0] = "1. Jerry Rice"; //
    question4.answer[1] = "2. Emmitt Smith";
    question4.answer[2] = "3. LaDainian Tomlinson"; 
    question4.valid = 1;

    question question5;
    question5.question = "Wich player has the most SuperBowl wins in NFL history?";
    question5.answer[0] = "1. Charles Haley";
    question5.answer[1] = "2. Tom Brady"; //
    question5.answer[2] = "3. Ted Hendricks";
    question5.valid = 2;

    // Play loop.
    cout << "Enter any key to start.";
    cin >> userAnswer;

    do
    {
        NewGame(wrongAnswer);
        system("CLS");
        for (int i = 1; i < 5; i++)
        {
            switch (i)
            {
            case 1:
                cout << question1.question << endl;
                cout << "\t" << question1.answer[0] << endl;
                cout << "\t" << question1.answer[1] << endl;
                cout << "\t" << question1.answer[2] << endl;
                cin >> userAnswer;
                if (userAnswer != question1.valid)
                { 
                    wrongAnswer++;
                    cout << "Incorect ! \n" << endl;
                }
                else
                {
                    cout << "Correct ! \n" << endl;
                }
                break;

            case 2:
                cout << question2.question << endl;
                cout << "\t" << question2.answer[0] << endl;
                cout << "\t" << question2.answer[1] << endl;
                cout << "\t" << question2.answer[2] << endl;
                cin >> userAnswer;
                if (userAnswer != question2.valid)
                {
                    wrongAnswer++;
                    cout << "Incorect ! \n" << endl;
                }
                else
                {
                    cout << "Correct ! \n" << endl;
                }
                break;

            case 3:
                cout << question3.question << endl;
                cout << "\t" << question3.answer[0] << endl;
                cout << "\t" << question3.answer[1] << endl;
                cout << "\t" << question3.answer[2] << endl;
                cin >> userAnswer;
                if (userAnswer != question3.valid)
                {
                    wrongAnswer++;
                    cout << "Incorect ! \n" << endl;
                }
                else
                {
                    cout << "Correct ! \n" << endl;
                }
                break;

            case 4:
                cout << question4.question << endl;
                cout << "\t" << question4.answer[0] << endl;
                cout << "\t" << question4.answer[1] << endl;
                cout << "\t" << question4.answer[2] << endl;
                cin >> userAnswer;
                if (userAnswer != question4.valid)
                {
                    wrongAnswer++;
                    cout << "Incorect ! \n" << endl;
                }
                else
                {
                    cout << "Correct ! \n" << endl;
                }
                break;

            case 5:
                cout << question5.question << endl;
                cout << "\t" << question5.answer[0] << endl;
                cout << "\t" << question5.answer[1] << endl;
                cout << "\t" << question5.answer[2] << endl;
                cin >> userAnswer;
                if (userAnswer != question5.valid)
                {
                    wrongAnswer++;
                    cout << "Incorect ! \n" << endl;
                }
                else
                {
                    cout << "Correct ! \n" << endl;
                }
                break;
            }

        }

        cout << "Your result is " << numberOfQuestions - wrongAnswer 
            << "/" << numberOfQuestions << " wich is " <<
            100 - (wrongAnswer * 20) << " % ." << endl;
        cout << "Do you want to play again ?" << endl;
        cin >> again;

    }while (again != "no" && again != "No");

    system("pause>0");
}