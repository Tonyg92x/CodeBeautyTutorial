// QueueDataSctructure :    Learning queue data structures
// Author :                 Anthony Guay
// Date :                   2/6/2021
// Credit :                 codebeauty youtube tutorial @https://www.youtube.com/watch?v=jaK4pn1jXTo

#include <iostream>
#include <queue>
using namespace std;


void printQueue(queue<int> queue)
{
    while (!queue.empty())
    {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
}

int main()
{
    // Queue data structure is a FIFO/FCFS data structure. Wich mean first in first out or first ocunt first serve. (example a printer)
    // It's diferente of a stack (last in first out)
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Size is " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;
    cout << "Last element is " << myQueue.back() << endl;

    cout << "My queue: " << endl;
    printQueue(myQueue);
    cin.get();
}
