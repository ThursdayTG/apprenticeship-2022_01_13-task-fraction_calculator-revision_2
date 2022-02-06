int cancellingNum(int numerator, int denominator) {
	for	(int i = 2;    i <= numerator + denominator;    i++) {
		if (numerator % i == 0) {
			if (denominator % i == 0) {
				return numerator / i;
			}
		}
	}

	return numerator;
}

int cancellingDen(int numerator, int denominator) {
	for	(int i = 2;    i <= numerator + denominator;    i++) {
		if (numerator % i == 0) {
			if (denominator % i == 0) {
				return denominator / i;
			}
		}
	}

	return denominator;
}



float A(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 + fraction2;

	return result;
}

float B(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 - fraction2;

	return result;
}

float C(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 * fraction2;

	return result;
}

float D(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 / fraction2;

	return result;
}
