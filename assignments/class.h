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

		void setAddress(string home)
		{
			address = home;
		}

		string getAddress()
		{
			return address
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

		void setFile(int file_info)
		{
			file_number = file_info;
		}

		int getFile()
		{
			return file_number;
		}

		void setRegistration(int reg_number)
		{
			registration_date = reg_number;
		}

		int getRegistration()
		{
			return registration_date;
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
