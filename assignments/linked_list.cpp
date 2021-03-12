#include <iostream>

using namespace std;

class LL
{
	public:
		void appending(LL** head, int new_info);  //declaration
		void inserting();
		void deleting();
		void print(LL *node);
		bool die(const string & msg);

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

	cout << endl;
}

bool LL::die(const string & msg)
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);	
}


int main()
{
	//setting deafult node null incase its only node in linked list
	LL* head = NULL;
	LL* caller;

	cout << "How many nodes to append?" << endl;

	int amount;

	cin >> amount;

	cout << "Input node values" << endl;
	int node_input;

	for(int i = 0; i < amount; i++)
	{
		cin >> node_input;
		caller->appending(&head, node_input);
	}

	//passing through value calling appending function
	cout << "Linked list appended:";
	caller->print(head);

	cout << "Nodes inside of linked list" << amount << "How many of said nodes would you delete?" << endl;

	int delete_nodes_amount;

	cin >> delete_nodes_amount;

	int node_position;

	for(int b = 0; b < delete_nodes_amount)
	{
		cin >> node_position;

		if(node_position > amount)
		{
			die("Node position doesn't exist");
		}
	}
}
