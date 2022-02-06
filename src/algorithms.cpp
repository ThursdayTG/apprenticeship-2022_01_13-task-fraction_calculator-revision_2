int cancellingNum(int numerator, int denominator)
{
	for	(int i = 2; i <= numerator + denominator; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			return numerator / i;
		}
	}

	return numerator;
}


int cancellingDen(int numerator, int denominator)
{
	for	(int i = 2; i <= numerator + denominator; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			return denominator / i;
		}
	}

	return denominator;
}




float addition(float inNum1, float inDen1, float inNum2, float inDen2) {

	float	fraction1 = inNum1 / inDen1;
	float	fraction2 = inNum2 / inDen2;
	float	result = fraction1 + fraction2;

	return result;
}


float subtraction(float inNum1, float inDen1, float inNum2, float inDen2) {

	float	fraction1 = inNum1 / inDen1;
	float	fraction2 = inNum2 / inDen2;
	float	result = fraction1 - fraction2;

	return result;
}

float multiplication(float inNum1, float inDen1, float inNum2, float inDen2) {

	float	fraction1 = inNum1 / inDen1;
	float	fraction2 = inNum2 / inDen2;
	float	result = fraction1 * fraction2;

	return result;
}


float division(float inNum1, float inDen1, float inNum2, float inDen2) {

	float	fraction1 = inNum1 / inDen1;
	float	fraction2 = inNum2 / inDen2;
	float	result = fraction1 / fraction2;

	return result;
}
