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
	LL* allocating = new LL();

	LL *last = *head;

	allocating->data = new_info;

	allocating->next = NULL;

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
	LL* head = NULL;
	LL* caller;

	caller->appending(&head, 7);
	caller->appending(&head, 9);

	cout << "Linked list appended: ";
	caller->print(head);
	cout << endl;

}
