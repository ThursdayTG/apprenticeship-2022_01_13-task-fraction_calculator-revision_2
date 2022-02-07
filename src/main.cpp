#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"
#include "../headers/algorithms.hpp"


using std::cout;
using std::cin;

using std::string;




int main()
{
	bool restartOperator;  // used to determine whether do-while loop should be repeated manually

	do
	{
		outStandard();


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
			outStandard();

			cout << " fraction 1: \t\t";
			if (num1 / den1 > 0)
			{
				cout << num1 / den1;
				cout << " ";
			}
			if (num1 - ((num1/den1) * den1) > 0)
			{
				cout << num1 - ((num1/den1) * den1) << sep1 << den1;
			}
			cout << "\n";

			cout << " mathematical operator: " << mathOp << "\n";

			cout << " fraction 2: \t\t";
			if (num2 / den2 > 0)
			{
				cout << num2 / den2;
				cout << " ";
			}
			if (num2 - ((num2/den2) * den2) > 0)
			{
				cout << num2 - ((num2/den2) * den2) << sep2 << den2;
			}
			cout << " \n ";

			for (int i = 0; i <= 50; i++)
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
