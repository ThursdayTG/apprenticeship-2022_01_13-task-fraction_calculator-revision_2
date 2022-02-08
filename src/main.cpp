#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"
#include "../headers/algorithms.hpp"


using std::cout;
using std::cin;

using std::string;




void outputImproperFraction(int, char, int, int);


int main()
{
	bool restartOperator;  // used to determine whether do-while loop should be repeated manually

	do
	{
		printHeader();


		bool loop = true;
		while (loop == true)
		{
			loop = false;

			//=== user input
			int  num1;  // numerator
			char sep1;  // separator
			int  den1;  // denominator
			cout << " fraction 1: \t\t";
			cin  >> num1 >> sep1 >> den1;

			char mathOp;
			cout << " mathematical operator: ";
			cin  >> mathOp;

			int  num2;
			char sep2;
			int  den2;
			cout << " fraction 2: \t\t";
			cin  >> num2 >> sep2 >> den2;


			//=== operations
			{
				int temp;

				temp = num1;
				num1 = cancelNum(num1, den1);
				den1 = cancelDen(temp, den1);

				temp = num2;
				num2 = cancelNum(num2, den2);
				den2 = cancelDen(temp, den2);
			}

			float result = 0.0;

			switch (mathOp)
			{
				case '1': case '+':
				{
					result = addition(num1, den1, num2, den2);
					break;
				}
				case '2': case '-':
				{
					result = subtraction(num1, den1, num2, den2);
					break;
				}
				case '3': case '*':
				{
					result = multiplication(num1, den1, num2, den2);
					break;
				}
				case '4': case '/':
				{
					result = division(num1, den1, num2, den2);
					break;
				}
				default:
				{
					mathOp = '0';
					loop = true;
				}
			}


			//=== output
			printHeader();

			outputImproperFraction(num1, sep1, den1, 1);
			outputImproperFraction(num2, sep2, den2, 2);

			for (int i = 0; i <= 53; i++)
			{
				cout << "-";
			}
			cout << " \n"
				 << " result: \t\t" << result << "\n";
		}


		//=== end block
		restartOperator = queryRestart();
		clearScreen();
	}
	while (restartOperator == true);

	return 0;
}




void outputImproperFraction(int num, char sep, int den, int counter)
{
	cout << " fraction " << counter << ": \t\t";

	if (num / den > 0)
	{
		cout << num / den;
		cout << " ";
	}

	if (num - ((num/den) * den) > 0)
	{
		cout << num - ((num/den) * den) << sep << den;
	}
	cout << " \n ";
}
