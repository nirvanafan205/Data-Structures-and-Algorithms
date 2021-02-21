#include <iostream>

using namespace std;

class Cancer
{
	private:
		string name;
		int idNumber;
		string affected_location;
		string Stage;
	public:
		//Setters
		void setName(string value)
		{
			name = value;
		}
		void setidNumber(int value)
		{
			idNumber = value;
		}
		void setLocation(string value)
		{
			affected_location = value;
		}
		void setStage(string value)
		{
			Stage = value;
		}

		//Getters
		string getName()const
		{
			return name;
		}
		int getidNumber()const {
			return idNumber;
		}
		string getLocation()const {
			return affected_location;
		}
		string getStage()const {
			return Stage;
		}

		//Constructor 1
		Cancer(string name, int idNumber, string affected_location, string Stage) {
			this->name = name;
			this->idNumber = idNumber;
			this->affected_location = affected_location;
			this->Stage = Stage;
		}

		//Constructor 2
		Cancer(string name, int idNumber) {
			this->name = name;
			this->idNumber = idNumber;
			this->affected_location = "";
			this->Stage = "";
		}

		//Constructor 3
		Cancer() {
			this->name = "";
			this->affected_location = "";
			this->Stage = "";
			this->idNumber = 0;
		}

		void Print();


};

void Cancer::Print() 
{
	cout << "Name: " << name << endl;
	cout << "ID Number: " << idNumber << endl;
	cout << "Affected Area: " << affected_location << endl;
	cout << "Stage: " << Stage << endl << endl;
}
//Objects
int main() {

	Cancer c1;

	c1.Print();

	string name_ = "bb";
	int idNumber_ = 2;
	string affected_location_ = "cc";
	string Stage_ = "dd";

	Cancer c2(name_, idNumber_, affected_location_, Stage_);
	c2.Print();

	Cancer c3("gg", 5);

}

