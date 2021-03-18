#include <iostream>

using namespace std;

class Patient
{
	private:

		string name;
		string address;
		int phone;
		char gender;
		int file_number;
		int registration_date;

	public:

		void setName(string name_)
		{
			name = name_	
		}

		string getName()
		{
			return name;
		}

		void setAdress(string home)
		{
			address = home;
		}

		void setNumber(int digits)
		{
			phone = digits;
		}

		int getNumber()
		{
			return phone;
		}

		void setGender(char sex)
		{
			gender = sex;	
		}

		char getGender()
		{
			return gender;
		}

		void set()
		{

		}

		void set()
		{

		}

		void set()
		{

		}




};

class CancerPatient : public Patient
{
	private:

		string cancer_type;
		int cancer_stage;
		int diagnoses_date;
		string medications;

	public:

};
