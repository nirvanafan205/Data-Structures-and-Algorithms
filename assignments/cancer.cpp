#include <iostream>

using namespace std;

class Cancer
{
	private:
		string name;
		int id_number;
		string affected_location;
		string stage;

	public:
		void setName(string value) //setters
		{
			name = value; 
		}

		string getName()  //getters
		{
			return name;
		}

		void setID(int num)
		{
			id_number = num; 
		}

		int getID() 
		{
			return id_number;
		}

		void setLocation(string affected)
		{
			affected_location = affected; 
		}

		string getLocation() 
		{
			return affected_location;
		}	

		void setStage(string stage_)
		{
			stage = stage_; 
		}

		string getStage() 
		{
			return stage;
		}

		Cancer() // default constructor 
		{
			name = "";
			id_number = 0;	
			affected_location = "";
			stage = "";
		}

		Cancer(string name_, int id, string area, string point) // constructor accepts following arguments and assigns accordingly
		{
			name = name_;
			id_number = id;
			affected_location = area;
			stage = point;
		}

		Cancer(string name_, int num) // constructor only assigning for name and ID setting others to empty string
		{
			name = name_;
			id_number = num;
			affected_location = "";
			stage = "";
		}
};

int main()
{
	Cancer c1; // default called

	cout << "Name: " << c1.getName() << endl;
	cout << "ID: " << c1.getID() << endl;
	cout << "Location: " << c1.getLocation() << endl;
	cout << "Stage: " << c1.getStage() << endl;

	Cancer c2("Breast Cancer", 32, "chest", "4th"); // constructor that accepts values and assigns accordingly 

	cout << endl << "Name: " << c2.getName() << endl;
	cout << "ID: " << c2.getID() << endl;
	cout << "Location: " << c2.getLocation() << endl;
	cout << "Stage: " << c2.getStage() << endl;


	Cancer c3("colon", 32); // accepts cancer's name and ID, default for location and stage

	cout << endl << "Name: " << c3.getName() << endl;
	cout << "ID: " << c3.getID() << endl;
	cout << "Location: " << c3.getLocation() << endl;
	cout << "Stage: " << c3.getStage() << endl;
}
