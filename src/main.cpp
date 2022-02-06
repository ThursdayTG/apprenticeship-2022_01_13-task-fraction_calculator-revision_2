#include <iostream>
#include <string>


#include "../headers/genericFunctions.hpp"


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


		//=== example block
		//local variable declaration

		cout << " test 1 ... ";
		cout << " \n ";

		cout << " test 2 ... "
			 << " \n ";


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
		int		inputNumerator1, inputDenominator1;
		int		inputNumerator2, inputDenominator2;

		float	output;


		// default output
		//lorem_ipsum


			// primary function execution
			switch (inputChar2) {
				case '1': case '+': case 'a': case 'A':
					output = A(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				case '2': case '-': case 'b': case 'B':
					output = B(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				case '3': case '*': case 'c': case 'C':
					output = C(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				case '4': case '/': case 'd': case 'D':
					output = D(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
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
