/*
   Matthew Garcia
   CS 136 
   Write a program that stores a series of numbers in a binary tree.
   Then have the program insert the values into a queue in ascending order.
   Dequeue the values and display them on the screen to confirm that they were stored in the proper order.
*/

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
	queue<int> Pbt, Fbt, Cbt;

	//Perfect Binary Tree
	Nodes* root = create(27); 

	//left side of tree
	root->left = create(8);
	root->left->left = create(2);
	root->left->right = create(9);

	//right side of tree
	root->right = create(1);
	root->right->left = create(24);
	root->right->right = create(57);

	//inputs binary tree values into queue
	//it is then sorted in ascending order
	inOrder(root, Pbt);
	sort(Pbt);

	//output
	cout << "Perfect Binary Tree is printed in ascending order: ";
	while(!Pbt.empty() )
	{
		cout << Pbt.front() << " ";
		Pbt.pop();
	}

	cout << endl;

	//Full Binary Tree
	Nodes* rootF = create(9);  

	//Only node of left side 
	rootF->left = create(42);

	//right side filled
	rootF->right = create(82);
	rootF->right->left = create(21);
	rootF->right->right = create(1);

	inOrder(rootF, Fbt);
	sort(Fbt);

	cout << "Full Binary Tree is printed in ascending order: ";
	while(!Fbt.empty() )
	{
		cout << Fbt.front() << " ";
		Fbt.pop();
	}
	cout << endl;

	//Complete Binary Tree
	Nodes* rootC = create(123); //last level isn't filled completely 

	//left side filled
	rootC->left = create(23);
	rootC->left->right = create(1);
	rootC->left->right->left = create(14);
	rootC->left->left = create(11);
	rootC->left->left->left = create(9);
	rootC->left->left->right = create(2);

	//right side partially filled
	rootC->right = create(30);
	rootC->right->left = create(42);
	rootC->right->right = create(9);

	inOrder(rootC, Cbt);
	sort(Cbt);

	cout << "Complete Binary Tree is printed in ascending order: ";
	while(!Cbt.empty() )
	{
		cout << Cbt.front() << " ";
		Cbt.pop();
	}
	cout << endl;
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
