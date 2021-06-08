/* Matthew Garcia 
 * CS136
 The program should have a loop that asks the user if he or she wishes to add a part to inventory, or take a part from inventory.
 The loop should repeat until the user is finished.
 print out all of the inventory when finished
 print out the deleted inventory when asked
*/

#include <iostream>
#include <stack>

using namespace std;

class inventory
{
	private:
		int serialNum;
		string manufactDate;
		int lotNum;	
	public:

		void setSerial(int num)
		{
			serialNum = num;
		}

		int getSerial()
		{
			return serialNum;
		}

		void setLot(int lot)
		{
			lotNum = lot;
		}

		int getLot()
		{
			return lotNum;
		}

		void setDate(string manufact)
		{
			manufactDate = manufact;
		}

		string getDate()
		{
			return manufactDate;
		}

		inventory()
		{
			serialNum = 0;
			manufactDate = "";
			lotNum = 0;
		}

		inventory(int idNum, string date, int ltNum)
		{
			serialNum = idNum;
			manufactDate = date;
			lotNum = ltNum;	
		}
};

template <class s>
class Dstack
{
	private: 
		struct StackNode
		{
			s items;
			StackNode *next;
		};

		StackNode *top;

	public:
		Dstack()
		{
			top = NULL;
		}

		void push(s);
		void pop(s &);
		bool isEmpty();
};

int main()
{
	Dstack<inventory> stacks;
	int lNum;
	inventory info;
	int serialNum;
	string date;
	int pick;

	do
	{
		cout << "Enter 1 to add part to inventory " << endl << "Enter 2 to take apart from inventory" << endl << "Enter 3 to quit" << endl;
		cin >> pick;

		while(pick != 1 && pick != 2 && pick != 3)
		{
			cout << "Input error" << endl;
			cout << "Enter 1 to add part to inventory " << endl << "Enter 2 to take apart from inventory" << endl << "Enter 3 to quit" << endl;
			cin >> pick;
		}

		switch(pick)
		{
			case 1:
				cout << endl << "Input item's serial number" << endl;
				cin >> serialNum;
				info.setSerial(serialNum);

				cout << "Input lot number" << endl;
				cin >> lNum;
				info.setLot(lNum);

				cout << "Input manufacture date" << endl;
				cin.ignore();
				getline(cin, date, '\n');
				info.setDate(date);

				stacks.push(info);
				amount++;
				break;

			case 2:
				if(stacks.isEmpty() )
				{
					cout << "It's empty" << endl;
				}

				else
				{
					cout << "The following will be deleted" << endl;
					cout << "Serial number: " << info.getSerial() << endl;			
					cout << "Lot number: " << info.getLot() << endl;
					cout << "manufacture date: " << info.getDate() << endl;
					stacks.pop(info);
				}

				break;

			case 3:
				cout << "Exiting program" << endl;
				break;
		}

	} while(pick != 3);

	cout << endl;

	while(!stacks.isEmpty() )
	{
		stacks.pop(info);
		cout << "Serial number: " << info.getSerial() << endl;			
		cout << "Lot number: " << info.getLot() << endl;
		cout << "manufacture date: " << info.getDate() << endl;
	}
}

	template <class s>
void Dstack<s>::push(s item)
{
	StackNode *newNode;
	newNode = new StackNode;
	newNode->items = item;

	if(isEmpty() )
	{
		top = newNode;
		newNode->next = NULL;
	}

	else
	{
		newNode->next = top;
		top = newNode;
	}
}

	template <class s>
void Dstack<s>::pop(s &n)
{
	StackNode *temp;

	if(isEmpty() )
	{
		cout << "Empty" << endl;
		return;
	}

	else
	{
		n = top->items;
		temp = top->next;
		delete top;
		top = temp;
	}
}

	template <class s>
bool Dstack<s>::isEmpty()
{
	if(!top)
	{
		return true;
	}

	else
	{
		return false;
	}
}
