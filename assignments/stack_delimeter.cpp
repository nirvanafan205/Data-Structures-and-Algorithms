/* Matthew Garcia
 * project 4 CS136
 checks single stack to make sure a string containing
 braces, parentheses, and brackets is delimited correctly
 also checks if there's a string input to check for  
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

void check(string input);

int main()
{
	//testing with balanced, unbalanced, and empty string
	//added letters inbetween to make it more complicated

	string str1 = "{}[]()";
	string str2 = "";
	string str3 = "(asdfasf";
	string str4 = "{asfnv}asdf(e)asfsdfas()";
	string str5 = "asf[asff{adfsasfdasf}asfdvadfpgo(asbpoqind{avd}o)as]";
	string str6 = "asdfb[asfdb]asvve{asdvasf{asvd}asdfas}(asdfsaf";

	check(str1);
	check(str2);
	check(str3);
	check(str4);
	check(str5);
	check(str6);
}

void check(string input)
{
	stack<char> stack;

	if(input == "")
	{
		cout << "empty stack" << endl;
		return;
	}

	//loops through each character to check for specific delimeter
	for(int i = 0; i < input.length(); i++)
	{
		if(input[i] == '(' || input[i] == '[' || input[i] == '{')
		{
			stack.push(input[i]);
		}

		else if(input[i] == ')' || input[i] == ']' || input[i] == '}' )
		{
			if(stack.empty() )
			{
				cout << input << " is unbalanced" << endl;
				return;
			}

			if(input[i] == '}' && stack.top() == '{')
			{
				stack.pop();
			}

			else if(input[i] == ')' && stack.top() == '(')
			{
				stack.pop();
			}

			else if(input[i] == ']' && stack.top() == '[')
			{
				stack.pop();
			}

			else
			{
				cout << input << " is unbalanced" << endl;
				return;
			}
		}
	}

	if(stack.empty() )
	{
		cout << input << " is balanced" << endl; //if empty it means balanced
	}

	else
	{
		cout << input << " is unbalanced" << endl; //if char inside of stack, unbalanced
	}
}
