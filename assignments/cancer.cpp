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
};

int main()
{

}
