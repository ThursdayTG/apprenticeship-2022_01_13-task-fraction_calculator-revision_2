int adjustValue(int int1, int int2)
{
	for (int i = int1 + int2; i >= 2; i--)
	{
		if (int1 % i == 0 && int2 % i == 0)
		{
			return int1 / i;
		}
	}

	return int1;
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
