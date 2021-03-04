#include <iostream>
using namespace std;

class Solution
{
	public:
		void print(int *nums, int amogus);
		void sort();
		void average();
};

int main()
{
	Solution *caller;

	cout << "How many scores to input?" << endl;

	int amount;

	cin >> amount;

	int scores[amount], *scoresptr;

	scoresptr = scores;

	for(int i = 0; i < amount; i++)
	{
		cin >> scores[i];
	}

	int size = sizeof(scores) / sizeof(scores[0]);

	caller->print(scoresptr, size);
}

void Solution::print(int *nums, int amogus)
{
	cout << endl;

	for(int i = 0; i < amogus; i++)
	{
		*(nums + i);

		cout << i << endl;
		cout << *nums << endl;
	}	
}
