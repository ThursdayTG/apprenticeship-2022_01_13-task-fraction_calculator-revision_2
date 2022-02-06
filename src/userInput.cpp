#include <iostream>

#include "../headers/genericFunctions.hpp"
#include "../headers/algorithms.hpp"


void userInput()
{
	using std::cout;
	using std::cin;

	using std::string;


	// local variable declaration
	bool	loop = true;
	char	inputChar1, inputChar2;
	int		inputNumerator1, inputDenominator1;
	int		inputNumerator2, inputDenominator2;

	float	output;


	while (loop == true)
	{
		loop = false;

		// user input pt1
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n ";
		cin		>> inputNumerator1 >> inputChar1 >> inputDenominator1;

		int storagemerator1 = inputNumerator1;

		inputNumerator1		= cancellingNum(inputNumerator1, inputDenominator1);
		inputDenominator1	= cancellingDen(storagemerator1, inputDenominator1);

		clearScreen();
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n "
				<< inputNumerator1 << inputChar1 << inputDenominator1;


		// user input pt2
		cout	<< " \n input mathematical operator (A/B/C/D) \n ";
		cin		>> inputChar2;


		// user input p3
		cout	<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n ";
		cin		>> inputNumerator2 >> inputChar1 >> inputDenominator2;

		clearScreen();
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n "
				<< inputNumerator1 << inputChar1 << inputDenominator1
				<< " \n "
				<< inputChar2
				<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n "
				<< inputNumerator2 << inputChar2 << inputDenominator2;
	}
}
