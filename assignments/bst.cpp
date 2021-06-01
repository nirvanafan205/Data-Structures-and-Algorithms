#include <iostream>
using namespace std;

struct Nodes
{
	int data;
	string name;
	Nodes *right; 
	Nodes *left;
};

Nodes* create(int data, string name);

void inOrder(Nodes* temp);

int main()
{
	Nodes* root = create(1021, "John Williams");
	root->left = create(1057, "Bill Witherspoon");
	root->right = create(2487, "Jennifer Twain");

	inOrder(root);
}


Nodes* create(int data, string name)
{
	Nodes* newNode = new Nodes();

	if(!newNode)
	{
		return NULL;
	}

	newNode->data = data;
	newNode->name = name;
	newNode->left = newNode->right = NULL;
	return newNode;
}


void inOrder(Nodes* temp)
{
	if(temp)
	{
		inOrder(temp->left);
		cout << temp->data << " " << temp->name << endl;
		inOrder(temp->right);
	}
}
