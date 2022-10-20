public class recursion
{
	static void printFun(int test)
	{
		//base case
		if(test < 1)
		{
			return;
		}

		else
		{
			System.out.printf("%d ", test);

			//statement 2
			printFun(test - 1);

			System.out.printf("%d ", test);

			return;
		}
	}

	static int nums(int num)
	{
		if(num == 1)
		{
			return 1;
		}

		else
		{
			 return num * nums(num - 1);
		}
	}

	static int count(String word)
	{
		if(word.equals(""))
		{
			return 0;
		}

		else
		{
			return 1 + count(word.substring(1));
		}
	}

	public static void main(String[] args)
	{
		int test = 3;
		//printFun(test);

		int num = 5;

		String ayyy = "asfd";

		System.out.println(nums(num));
		System.out.println(count(ayyy));
	}
}
