// LinkedList:	Introduction to Linked Lists
// Author :		Anthony Guay
// Date :		14/5/2021
// Credit :		CodeBeauty youtube tutorial @https://www.youtube.com/watch?v=HKfj0l7ndbc

#include <iostream>
using namespace std;

class Node // A node is one element of a linked list.
{
public:
	int Value;
	Node* Next;
};

void printList(Node* n)
{
	while (n != NULL)
	{
		cout << n->Value << endl;
		n = n->Next;
	}
}

void insertAtTheFront(Node** head, int newValue)
{
	//	1. Prepare a newNode
	Node* newNode = new Node();
	newNode->Value = newValue;

	//	2. Put it in front of a current head
	newNode->Next = *head;

	//	3. Move head of the list to point to the newNode
	*head = newNode;
}

void insertAtTheEnd(Node** head, int newValue)
{
	//	1. Prepare a newNode
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;

	//	2. If linked list is empty, newNode will be a head node
	if (*head == NULL)
	{
		*head = newNode;
		return;
	}

	//	3. Find the last node
	Node* last = *head;
	while (last->Next != NULL)
	{
		last = last->Next;
	}

	//	4. Insert newNode after last node (at the end)
	last->Next = newNode;
}

void insertAfter(Node* previous, int newValue)
{
	//	1. Check is previous node is NULL
	if (previous == NULL)
	{
		cout << "Previous can not be NULL.";
		return;
	}
	
	//	2. Prepare a newNode
	Node* newNode = new Node();
	newNode->Value = newValue;

	//	3. Insert newNode after previous
	newNode->Next = previous->Next;
	previous->Next = newNode;
}

int main()
{

	/*
		What is a linked List ? It is a data structure used to store
		or organise data. Unlike arays, a linked list is a non-
		continuous data organisation. To acces element of a linked
		list you need to link an element to an adress with pointers.
		Each element contain a value and a pointer that link to 
		the next element. The last element pointer is NULL.

		Advantage :
			Linked list is dynamic. It mean you can change the size
			of the data usage while the program is in use.

		Disavantage :
			The acces of a specific element of a linked list is
			impossible. You have to pass from the first element
			to the desired element because pointer to the element
			wanted is in the previous element. Example if you want
			to acces element 4, the pointer is in element 3.

			Linked List need more memory space because it store 2 
			things.It stock the value and the pointer. Array dosent
			use pointer so it take less place.
	*/

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->Value = 1;
	head->Next = second;
	second->Value = 2;
	second->Next = third;
	third->Value = 3;
	third->Next = NULL;

	insertAfter(head, -1);
	insertAfter(third, 8);
	insertAtTheFront(&head, -999);
	insertAtTheEnd(&head, 999);

	printList(head);

	system("pause>0");
}
