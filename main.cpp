#include <iostream>
#include <string>


#include "main.hpp"


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
