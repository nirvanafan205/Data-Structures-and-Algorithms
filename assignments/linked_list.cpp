#include <iostream>

using namespace std;

class LL
{
	public:
		void appending(LL** head, int new_info);  //declaration
		void inserting();
		void deleting();
		void print(LL *node);

		int data;
		LL *next;
};

void LL::appending(LL** head, int new_info) //definitions
{
	//allocating node
	LL* allocating = new LL();

	//tail
	LL *last = *head;

	
	// making node the value thats passed in main
	allocating->data = new_info;

	//making new node NULL for the end of linked list
	allocating->next = NULL;

	//checking if linked list is empty, new node is made head 
	if(*head == NULL)
	{
		*head = allocating;
		return;
	}

	//traverse until the last node
	while(last->next != NULL)
	{
		last = last->next;
	}

	// change the next of the last node
	last->next = allocating;
	return;
}

void LL::inserting() // accessing member variables 
{
	//do something
}

void LL::deleting()
{
	// do something	
} 

void LL::print(LL *node)
{
	while(node != NULL)
	{
		cout << " " << node->data;
		node = node->next;
	}
}

int main()
{
	//setting deafult node null incase its only node in linked list
	LL* head = NULL;
	LL* caller;

	//passing through value calling appending function
	caller->appending(&head, 8);
	caller->appending(&head, 2);
	caller->appending(&head, 4);
	caller->appending(&head, 9);

	cout << "Linked list appended:";
	caller->print(head);
	cout << endl;
}
