#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"
#include "../headers/userInput.hpp"
#include "../headers/algorithms.hpp"


using std::cout;
using std::cin;

using std::string;




int main()
{
	bool restartOperator;  // used to determine whether do-while loop should be repeated manually

	do
	{
		clearScreen();
		cout << "\n";
		outStandard();


		bool loop = true;
		while (loop == true)
		{
			loop = false;

			//=== user input
			int  num1 = inInt();   // numerator
			char sep1 = inChar();  // separator
			int  den1 = inInt();   // denominator

			char mathOp = inChar();

			int  num2 = inInt();
			char sep2 = inChar();
			int  den2 = inInt();


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

			cout
			<< " fraction 1: " << num1 << sep1 << den1 << "\n"
			<< " fraction 2: " << num2 << sep2 << den2 << "\n"
			<< " result: "     << result
			<< " \n";
		}


		//=== end block
		restartOperator = queryRestart();
		clearScreen();
	}
	while (restartOperator == true);

	return 0;
}
