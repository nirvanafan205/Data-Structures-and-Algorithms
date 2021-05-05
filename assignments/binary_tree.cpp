#include <iostream>
#include <queue>

using namespace std;

//pointer to the left and right for child
struct nodes
{
	int data;
	Nodes *right;
	Nodes *left;
};

//makes new node

Node* create(int data)
{
	Node* newNode = new Node();

	if(!newNode)
	{
		return NULL;
	}

	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* insert(Node* root, int data)
{
	//checks for empty tree
	
	if(root == NULL)
	{
		root = CreateNode(data);
		return root;
	}
}

int main()
{

}
