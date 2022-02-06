#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"
#include "../headers/algorithms.hpp"


using std::cout;
using std::cin;

using std::string;




int inputInt()
{
	string input;
	bool   loop = true;

	while (loop == true)
	{
		loop = false;

		cout << "input: ";
		cin  >> input;

		if (    input == "quit"
			 || input == "exit"
		)  {
			cout << " undefined function \n";
			loop = true;
		}
	}

	return std::stoi(input);
}


char inputChar()
{
	char input = '0';
	cin >> input;
	return input;
}




void userInputOld()
{
	using std::cout;
	using std::cin;

	using std::string;


	// local variable declaration
	bool	loop = true;
	char	inputChar1, inputChar2;
	int		num1, den1;
	int		num2, den2;

	float	output;


	while (loop == true)
	{
		loop = false;

		// user input pt1
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n ";
		cin		>> num1 >> inputChar1 >> den1;

		int storagemerator1 = num1;

		num1 = cancelNum(num1, den1);
		den1 = cancelDen(storagemerator1, den1);

		clearScreen();
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n "
				<< num1 << inputChar1 << den1;


		// user input pt2
		cout	<< " \n input mathematical operator (A/B/C/D) \n ";
		cin		>> inputChar2;


		// user input p3
		cout	<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n ";
		cin		>> num2 >> inputChar1 >> den2;

		clearScreen();
		cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n "
				<< num1 << inputChar1 << den1
				<< " \n "
				<< inputChar2
				<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n "
				<< num2 << inputChar2 << den2;
	}
}
