#include <iostream>
#include <queue>

using namespace std;

//pointer to the left and right for child
struct Nodes
{
	int data;
	Nodes *right;
	Nodes *left;
};

//makes new node

Nodes* create(int data)
{
	Nodes* newNode = new Nodes();

	if(!newNode)
	{
		return NULL;
	}

	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

/*
Node* insert(Node* root, int data)
{
	//checks for empty tree
	
	if(root == NULL)
	{
		root = CreateNode(data);
		return root;
	}

	queue<Node*> info;
	info.push(root);

	while(!info.empty() )
	{
		Node* temp = info.front();
		info.pop();

		if(temp->left != NULL)
		{
			info.push(temp->left);
		}

		else
		{
			temp->left = CreateNode(data);
		}
		
	}
}
*/

//inorder traversal of binary tree
void inOrder(Nodes* temp);

int main()
{
	Nodes* root = create(27); //begining of tree

	//left side of tree
	root->left = create(8);
	root->left->left = create(2);
	root->left->right = create(9);

	//right side of tree
	root->right = create(1);
	root->right->left = create(24);
	root->right->right = create(57);

	//calling to print binary tree inorder
	inOrder(root);
}

void inOrder(Nodes* temp)
{
	if(temp == NULL)
	{
		return;
	}

	inOrder(temp->left);
	cout << temp->data << ' ';
	inOrder(temp->right);
}
