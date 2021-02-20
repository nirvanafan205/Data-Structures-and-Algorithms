/*
Write a recursive function that accepts two arguments into the parameters x and y .
The function should return the value of x times y

Matthew Garcia 
CS136 Assignemt 2 recursion
*/

#include <iostream>

using namespace std;

int multiplication(int x, int y);

int main()
{
	cout << "Enter two numbers" << endl;	

	int x, y;

	cin >> x;

	cin >> y;

	cout << multiplication(x, y) << endl;
}

int multiplication(int x, int y)
{
	if(x == 1)
	{
		return y;
	}

	else
	{
		return y + multiplication(x - 1, y);
	}
}
