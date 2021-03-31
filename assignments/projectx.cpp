#include <iostream>

using namespace std;

class projectx
{
	private:
		int labScore;
		int grade;
		int essayScore;
		int finalScore;

	public:
		//lab activity info
		projectx lab(projectx *nums[]);
		
		void setLabscore(int labS)
		{
			labScore = labS;
		}

		int getLabscore()
		{
			return labScore;
		}


		//passFail info
		projectx passFail(projectx *nums[]); // definition

		void setGrade(int score)
		{
			grade = score;
		}

		int getGrade()
		{
			return grade;
		} 

		// Final Exam info
		projectx finalExam(projectx *nums[]);

		void setEssayScore(int escore)
		{
			essayScore = escore;
		}

		int getEssayScore()
		{
			return essayScore;
		}

		projectx essay(projectx *nums[]);

		void setFinals(int fScore)
		{
			finalScore = fScore;	
		}

		int getFinals()
		{
			return finalScore;
		}


		//constructors 
		projectx(int num)
		{
			grade = num;
		}
};

int main()
{
	projectx* caller; // to call functions
	projectx pF(70);

	projectx* patients[1] = {&pF}; //getting the addresss of pF

	caller->passFail(patients); //calling passFail function to determine grade
}

projectx projectx::passFail(projectx *nums[]) // declaration
{
	for(int i = 0; i < 1; i++)
	{
		nums[i]->getGrade();

		if(nums[i]->getGrade() > 69)
		{
			cout << "P" << endl;	
		}

		else
		{
			cout << "F" << endl;
		}
	}
}

projectx finalExam(projectx *nums[])
{

}

projectx essay(projectx *nums[])
{

}

projectx lab(projectx *nums[])
{

}
