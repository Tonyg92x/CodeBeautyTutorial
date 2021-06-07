// QueueProgram :   Program that represent my daily schedule.
// Author :         Anthony Guay
// Date :           2/6/2020

#include <iostream>
#include <queue>
#include <string>
using namespace std;

void AddTask(queue<string> &queue, string task)
{
    queue.push(task);
}

void RemoveTask(queue<string>& queue)
{
    queue.pop();
}

void PrintQueue(queue<string> queue)
{
    while (!queue.empty())
    {
        cout << queue.front() << "\n";
        queue.pop();
    }
}

void OptionChooser(int& option)
{
    option = 0;
    while (option != 1 && option != 2 && option != 3 && option != 4)
    {
        cout << " 1 ) \t Add a task \n 2 ) \t Remove a task \n 3 ) \t Show schedule \n 4 ) \t Quit \n";
        cout << "Please enter the figure coresponding to your'e choice: ";
        while (!(cin >> option))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid option. Try again: " << endl;
            system("pause");
        }
        if (option != 1 && option != 2 && option != 3 && option != 4)
        {
            cout << "Please enter a valid option. Try again: " << endl;
            system("pause");
        }
        system("cls");
    }
}

int main()
{
    // Create a program that allow to add task at the end of the schedule, delete a task at the
    // begining of the schedule or print every task entered.

    queue<string> schedule;
    int option = 5;
    string task;
    cout << "Welcome in my schedule editor program." << endl;

    while (option != 4)
    {
        OptionChooser(option);

        switch (option)
        {
        case 1:
            cout << "What task do you want to add to your schedule?" << endl;
            cin.get();
            getline(cin, task);
            AddTask(schedule, task); 
            system("cls");
            break;
      
        case 2: 
            if (schedule.size() > 0)
            {
                schedule.pop();
                cout << "First task deleted.";
                system("pause");
            }
            else
            {
                cout << "It isn't possible to delete a task if your schedule has zero task. \n";
                system("pause");
                system("cls");
            }
            break;
        case 3: 
            PrintQueue(schedule);
            system("pause");
            system("cls");
            break;
        }
    }

    cin.get();
}

