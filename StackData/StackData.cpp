// StackData :  
// Author:      Anthony Guay
// Date :       18/5/2021
// Credit :     CodeBeauty youtube tutorial @https://www.youtube.com/watch?v=GBST5uQ_yos&ab_channel=CodeBeautyCodeBeauty

#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    // Same as stack pile saw in GIF-1001

    // What is a stack ?
    /*
    *   Stack is tyupe of data collection who use lifo strat.
    *   last in first out. (world war win with this method)
    * 
    *   usage : 
    *       Chess game, precedent move or undo in word or visual
    *       studio, or back on your browser ect.
    */

    stack<int>numberStack;

    // Fonction that tell if the stack is empty
    if (numberStack.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    // Fonction that tell the size of the stack
    cout << "Stack size is " << numberStack.size() << "." << endl;

    // Fonction to add an element (push)
    int number = 1;

    for (int i = 1; i <= 10; i++)
    {
        numberStack.push(number);
        number++;
    }

    // Test precedent fonction (should have create the fonction)

    if (numberStack.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    cout << "Stack size is " << numberStack.size() << "." << endl;

    // Fonction to get the lement on top (top)
    
    cout << "The value on the top of the stack is : " << numberStack.top()
        << endl;

    // Fonction to get an element (pop)
    cout << "\n" << endl;
    cout << "Let's pop a value." << endl;
    numberStack.pop();
    cout << "Stack size is " << numberStack.size() << "." << endl;

    // With printStackElements fonctions
    printStackElements(numberStack);
 
    cin.get();
}

