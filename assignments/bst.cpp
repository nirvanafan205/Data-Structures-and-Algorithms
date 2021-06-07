/*
 * Matthew Garcia
 * CS136 employee information Pt 1 Final

Design an EmployeeInfo class that holds the following employee information:
Employee ID Number: an integer
Employee Name: a string
then implement a binary tree whose nodes hold an instance of the EmployeeInfo class.
The nodes should be sorted on the Employee ID number.
*/

#include <iostream>
using namespace std;

class EmployeeInfo
{
	public:
		int data;
		string name;
		EmployeeInfo *right; 
		EmployeeInfo *left;		

		EmployeeInfo(int nums, string alias, EmployeeInfo *l = NULL, EmployeeInfo *r = NULL)
		{
			data = nums;
			name = alias;
			left = l;
			right = r;
		}

		EmployeeInfo *root;

		void insert(int, string,EmployeeInfo *&);
		string search(int, EmployeeInfo*);

		EmployeeInfo() 
		{
			root = NULL;
		}

		void insert(int num, string nme)
		{
			insert(num, nme, root);
		}


		string search(int num)
		{
			return search(num, root);
		}
};

int main()
{
	EmployeeInfo info;
	string person;
	int ID;

	info.insert(1899, "Ashley Smith");
	info.insert(2487, "Jennifer Twain");
	info.insert(4218, "Josh Plemmons");
	info.insert(1021, "John Williams");
	info.insert(1017, "Debbie Reece");
	info.insert(1275, "George McMullen");
	info.insert(3769, "Sophia Lancaster");
	info.insert(1057, "Bill Witherspoon");

	do
	{
		cout << "Enter employee number or 2 to exit program " << endl;
		cin >> ID;

		if(ID != 2)
		{
			person = info.search(ID);

			if(person == "Error")
			{
				cout << person << ": Employee ID not found." << endl;
			}

			else
			{
				cout << "Employee name: " << person << endl;
			}
		}

	} while(ID != 2);
}

void EmployeeInfo::insert(int num, string y , EmployeeInfo *&x)
{
	if(!x)
	{
		x = new EmployeeInfo(num, y);
		return;
	}

	if(num == x->data)
	{
		return;
	}

	else if(num < x->data)
	{
		insert(num, y, x->left);
	}

	else
	{
		insert(num, y, x->right);
	}
}

string EmployeeInfo::search(int i, EmployeeInfo * names)
{
	if(names)
	{
		if(i == names->data)
		{
			return names->name;
		}

		else if(i < names->data)
		{
			return search(i, names->left);
		}

		else
		{
			return search(i, names->right);
		}
	}

	return "Error";
}
