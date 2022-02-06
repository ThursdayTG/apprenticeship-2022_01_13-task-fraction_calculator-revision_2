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

		/*
		cout << " test 1 ... ";
		cout << " \n ";

		cout << " test 2 ... "
			 << " \n ";
		*/


		//=== standard output
		cout << " --- --= === FRACTION CALCULATOR === =-- --- \n"
			 << " \n"
			 << " user input: \n"
			 << " numerator 1 - separation character - denumerator 1 \n"
			 << " mathematical operator ( + || - || * || / ) \n"
			 << " numerator 2 - separation character - denumerator 2 \n"
			 << " \n";


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
		int		inNum1, inDen1;
		int		inNum2, inDen2;

		float	output;


		// default output
		//lorem_ipsum


			// primary function execution
			switch (inputChar2) {
				case '1': case '+': case 'a': case 'A':
					output = A(inNum1, inDen1, inNum2, inDen2);
				break;
				case '2': case '-': case 'b': case 'B':
					output = B(inNum1, inDen1, inNum2, inDen2);
				break;
				case '3': case '*': case 'c': case 'C':
					output = C(inNum1, inDen1, inNum2, inDen2);
				break;
				case '4': case '/': case 'd': case 'D':
					output = D(inNum1, inDen1, inNum2, inDen2);
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
