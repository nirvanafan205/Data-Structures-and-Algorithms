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
Nodes* create(int data);

//inorder traversal of binary tree
void inOrder(Nodes* temp, queue<int> &tree);

int main()
{
	queue<int> bst;
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
	inOrder(root, bst);

	while(!bst.empty() )
	{
		cout << bst.front() << " ";
		bst.pop();
	}
}

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

void inOrder(Nodes* temp, queue<int> &tree)
{
	if(temp)
	{
		inOrder(temp->left, tree);
		tree.push(temp->data);
		inOrder(temp->right, tree);
	}
}
