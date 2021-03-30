#include <iostream>

using namespace std;

class projectx
{
	public:
		void passFail(); // definition
};


int main()
{
	projectx* caller; // to call functions
	
	projectx* patients[] = {};

	caller->passFail();
}

void projectx::passFail() // declaration
{
	cout << "Hello World" << endl;
}
