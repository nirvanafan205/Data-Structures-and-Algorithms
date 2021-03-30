#include <iostream>

using namespace std;

class projectx
{
	public:
		projectx passFail(); // definition
};


int main()
{
	projectx* caller; // to call functions
	
	projectx* patients[] = {};

	caller->passFail();

}

projectx projectx::passFail() // declaration
{
	cout << "Hello World" << endl;
}
