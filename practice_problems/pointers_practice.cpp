#include <iostream>
using namespace std;

class Solution
{
	public:
		void print(int *nums, int amount);
		void sort(int *x, int n);
		void average();
};

int main()
{
	Solution *caller;

	cout << "How many scores to input?" << endl;

	int amount;

	cin >> amount;

	int *scoresptr = nullptr;

	scoresptr = new int[amount];

	for(int i = 0; i < amount; i++)
	{
		cin >> scoresptr[i];
	}

	caller->sort(scoresptr, amount);
	caller->print(scoresptr, amount);
}

void Solution::print(int *nums, int amount)
{
	cout << endl;

	for(int i = 0; i < amount; i++)
	{
		cout << *(nums + i) << endl;
	}	
}

void Solution::sort(int *x, int n)
{
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n - i; ++j)
		{
			if(x[j] > x[j + 1])
			{
				int temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
}
