#include <iostream>

using namespace std;

class LL
{
	public:
		void appending(LL** head, int new_info);  //declarations
		void inserting(LL** current, int pos, int data, int size);
		void deleting(LL** head, int key);
		LL* getNode(int data);
		bool die(const string & msg);
		void print(LL *node);
		int getCount(LL* head);

		int data;
		LL *next;
};


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

	cout << "Nodes inside of linked list " << amount << " How many of said nodes would you delete?" << endl;

	int delete_nodes_amount;

	cin >> delete_nodes_amount;

	cout << "Enter node key number to delete node from the linked list " << endl;

	caller->print(head);

	cout << endl;

	int node_number;

	for(int b = 0; b < delete_nodes_amount; b++)
	{
		cin >> node_number;

		caller->deleting(&head, node_number);
	}

	cout << endl << "Linked list after with deleted nodes:";
	caller->print(head);

	cout << "amount of nodes in linked list " << caller->getCount(head) << endl;

	int size = caller->getCount(head);

	cout << "how many nodes to insert?" << endl;

	int insert_amount;

	cin >> insert_amount;

	int position, key;

	for(int i = 0; i < insert_amount; i++)
	{
		if(head == NULL)
		{
			position, key = 1;
			int size = caller->getCount(head);

			caller->inserting(&head, position, key, size);
			cout << "Linked List with node added";
			caller->print(head);
		}

		cout << "Enter position in linked list to insert node then enter key" << endl;
		cin >> position;
		cin >> key;

		caller->inserting(&head, position, key, size);

		int size = caller->getCount(head);
		cout << endl << "Linked list after inserting nodes:";

		caller->print(head);
	}

}

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

void LL::inserting(LL** current, int pos, int data, int size) // accessing member variables 
{
	LL* call;

	if(pos < 1 || pos > size + 1)
	{
		die("Input Failure");
	}

	else
	{
		while(pos--)
		{
			if(pos == 0)
			{
				LL* temp = call->getNode(data);
				temp->next = *current;
				*current = temp;
			}

			else
			{
				current = &(*current)->next;
			}
		} 
	}
}

LL* LL::getNode(int data)
{
	LL* newNode = new LL();
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void LL::deleting(LL** head, int key)
{
	//store head node
	LL* temp = *head;
	LL* prev = NULL;

	if(temp != NULL && temp->data == key)
	{
		*head = temp->next; // changed head
		delete temp; //free old head
		return;
	}

	else
	{
		while(temp != NULL && temp->data != key)
		{
			prev = temp;
			temp = temp->next;
		}

		if(temp == NULL)
		{
			return;
		}

		//unlinks node from linked list
		prev->next = temp->next;

		delete temp; // free memory
	}
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

int LL::getCount(LL* head) //counts how many nodes inside of linked list
{
	int count = 0;
	LL* current = head;

	while(current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}

bool LL::die(const string & msg) //ends program on bad input
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}
