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
};

class stack: public inventory
{
		
};

int main()
{

}
