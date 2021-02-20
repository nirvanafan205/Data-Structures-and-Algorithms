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
			name = value; // name is initiated in setter 
		}

		string getName() // data type string 
		{
			return name;  // returning value of name with same data type of name in the private section
		}

		// setters and getters are then repeated this way for others

		
};

int main()
{
	cout << "hello world" << endl;
}
