#include <iostream>
#include <stack>

using namespace std;

class inventory
{
	public:
		int serialNum;
		string manufactDate;
		int lotNum;	

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

		inventory(int idNum, string date, int ltNum)
		{
			serialNum = idNum;
			manufactDate = date;
			lotNum = ltNum;	
		}
};

class stack: public inventory
{

};

int main()
{
	int num;

	cout << "Enter 1 to add part to inventory " << endl << "Enter 2 to take apart from inventory" << endl << "Enter 3 to quit" << endl;

	cin >> num;

	while(num != 3)
	{
		switch(num)
		{
			case 1:
				/*
				   for()
				   {
				   make loop to ask for serial num, date, and lot num
				   }
				   */

				break;

			case 2:
				/*
				   for()
				   {
				   make loop to pop top most part then display the contents
				   }
				   */

				break;
		}

		cout << "Enter 1 to add part to inventory " << endl << "Enter 2 to take apart from inventory" << endl << "Enter 3 to quit" << endl;

		cin >> num;
	}
}
