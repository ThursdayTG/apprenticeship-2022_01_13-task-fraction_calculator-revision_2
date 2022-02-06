int cancelNum(int numerator, int denominator)
{
	for (int i = numerator + denominator; i >= 2; i--)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			return numerator / i;
		}
	}

	return numerator;
}


int cancelDen(int numerator, int denominator)
{
	for (int i = numerator + denominator; i >= 2; i--)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			return denominator / i;
		}
	}

	return denominator;
}




float addition(float num1, float den1, float num2, float den2)
{
	float fraction1 = num1 / den1;
	float fraction2 = num2 / den2;
	float result = fraction1 + fraction2;

	return result;
}


float subtraction(float num1, float den1, float num2, float den2)
{
	float fraction1 = num1 / den1;
	float fraction2 = num2 / den2;
	float result = fraction1 - fraction2;

	return result;
}


float multiplication(float num1, float den1, float num2, float den2)
{
	float fraction1 = num1 / den1;
	float fraction2 = num2 / den2;
	float result = fraction1 * fraction2;

	return result;
}


float division(float num1, float den1, float num2, float den2)
{
	float fraction1 = num1 / den1;
	float fraction2 = num2 / den2;
	float result = fraction1 / fraction2;

	return result;
}
