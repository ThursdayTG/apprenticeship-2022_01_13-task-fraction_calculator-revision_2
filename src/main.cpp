#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"
#include "../headers/userInput.hpp"




int main()
{
	using std::cout;
	using std::cin;

	using std::string;


	bool restartOperator;  // used to determine whether do-while loop should be repeated manually

	do
	{
		clearScreen();
		cout << "\n";


		//=== standard output
		cout << " --- --= === FRACTION CALCULATOR === =-- --- \n"
			 << " \n"
			 << " user input: \n"
			 << " numerator 1 - separation character - denumerator 1 \n"
			 << " mathematical operator ( + || - || * || / ) \n"
			 << " numerator 2 - separation character - denumerator 2 \n"
			 << " \n";


		//=== user input
		int  num1       = inputInt();
		int  separator1 = inputChar();
		int  den1       = inputInt();

		int  num2       = inputInt();
		int  separator2 = inputChar();
		int  den2       = inputInt();

		char mathOp;


		//=== end block
		restartOperator = queryRestart();
		clearScreen();
	}
	while (restartOperator == true);

	return 0;
}

/*
int main() {

	// used to determine whether do-while loop should be repeated manually
	bool	restartOperator;

	do {

		// local variable declaration
		bool	loop = true;
		char	inputChar1, inputChar2;
		int		num1, den1;
		int		num2, den2;

		float	output;


		// default output
		//lorem_ipsum


			// primary function execution
			switch (inputChar2) {
				case '1': case '+': case 'a': case 'A':
					output = A(num1, den1, num2, den2);
				break;
				case '2': case '-': case 'b': case 'B':
					output = B(num1, den1, num2, den2);
				break;
				case '3': case '*': case 'c': case 'C':
					output = C(num1, den1, num2, den2);
				break;
				case '4': case '/': case 'd': case 'D':
					output = D(num1, den1, num2, den2);
				break;
				default:
					loop = true;
			}
		}


		// output
		cout	<< " \n result: "
				<< output
				<< " \n\n"
				<< " - - - - - ";


		// end block
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen

	}	while (restartOperator == true);

	return 0;
}
*/
