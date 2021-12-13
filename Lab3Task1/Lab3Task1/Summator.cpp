#include "Summator.h"

double Summator::calculate()
{
	double result = 0;

	for (int i = 0; i < countValue; i++)
	{
		result += pValue[i];
	}

	return result;
}