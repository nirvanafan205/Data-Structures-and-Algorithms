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
		void setName(string value)
		{
			name = value; 
		}

		string getName() 
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

};

int main()
{
	Cancer c1; // default called
      	 
	cout << "Name: " << c1.getName() << endl;
	cout << "ID: " << c1.getID() << endl;
	cout << "Location: " << c1.getLocation() << endl;
	cout << "Stage: " << c1.getStage() << endl;

}
