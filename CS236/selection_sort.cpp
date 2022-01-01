#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int min_idx = i;

		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}

		swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};

	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Before Sort" << endl;

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	selectionSort(arr,size);

	cout << endl << "After Sort" << endl;

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}
