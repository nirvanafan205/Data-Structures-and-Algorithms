#include <iostream>

using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		Node* prev;
};

void append(Node** head, int new_data);

int main()
{
	struct Node* head = NULL;

	append(&head,1);
	append(&head,2);
	append(&head,3);

	while(head != NULL)
	{
		cout << head->data << endl;
		head = head->next;
	}

	cout << "==========" << endl;
}

void append(Node** head, int new_data)
{
	Node* newNode = new Node();
	Node* tail = *head;

	newNode->data = new_data;

	newNode->next = NULL;

	if(*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return;
	}

	while(tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = newNode;

	newNode->prev = tail;
	
	return;
}
