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

void sort(queue<int> &q);

void push(queue<int> &q, int temp, int size);

void FtoL(queue<int> &q, int qsize);

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
	sort(bst);

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


void sort(queue<int> &q)
{

	if(q.empty() )
	{
		return;
	}

	int temp = q.front();

	q.pop();

	sort(q);

	push(q, temp, q.size() );
}


void push(queue<int> &q, int temp, int size)
{
	if(q.empty() || size == 0)
	{
		q.push(temp);
		return;
	}

	else if(temp <= q.front() )
	{
		q.push(temp);


		FtoL(q, size);
	}

	else
	{
		q.push(q.front() );
		q.pop();

		push(q, temp, size - 1);
	}
}

void FtoL(queue<int> &q, int qsize)
{
	if(qsize <= 0)
	{
		return;
	}

	q.push(q.front() );
	q.pop();

	FtoL(q, qsize - 1);
}
