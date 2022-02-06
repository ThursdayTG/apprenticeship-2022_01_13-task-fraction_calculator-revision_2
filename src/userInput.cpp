#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"
#include "../headers/algorithms.hpp"




int inputInt()
{
	using std::cout;
	using std::cin;

	using std::string;


	string input = "0";

	cin >> input;

	return std::stoi(input);
}

char inputChar()
{
	using std::cout;
	using std::cin;

	using std::string;


	string input = "0";

	cin >> input;

	return std::stoi(input);
}




void userInputOld()
{
	using std::cout;
	using std::cin;

	using std::string;


	// local variable declaration
	bool	loop = true;
	char	inputChar1, inputChar2;
	int		inNum1, inDen1;
	int		inNum2, inDen2;

	float	output;


	while (loop == true)
	{
		loop = false;

		// user input pt1
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n ";
		cin		>> inNum1 >> inputChar1 >> inDen1;

		int storagemerator1 = inNum1;

		inNum1		= cancellingNum(inNum1, inDen1);
		inDen1	= cancellingDen(storagemerator1, inDen1);

		clearScreen();
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n "
				<< inNum1 << inputChar1 << inDen1;


		// user input pt2
		cout	<< " \n input mathematical operator (A/B/C/D) \n ";
		cin		>> inputChar2;


		// user input p3
		cout	<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n ";
		cin		>> inNum2 >> inputChar1 >> inDen2;

		clearScreen();
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n "
				<< inNum1 << inputChar1 << inDen1
				<< " \n "
				<< inputChar2
				<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n "
				<< inNum2 << inputChar2 << inDen2;
	}
}
