#include "ExpressionEvaluator.h"
#include "Divisor.h"
#include "Summator.h"
#include "CustomExpressionEvaluator.h"

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

string Beauty(string Val) {
	string ans;
	int n = Val.size() - 1;
	while (Val[n] == '0')
		n--;
	if (Val[n] == '.')
		n++;
	for (int i = 0; i <= n; i++)
		ans += Val[i];
	return ans;
}

ExpressionEvaluator::ExpressionEvaluator(int n)
{
	countValue = n;
	pValue = new double[countValue] {};
}

ExpressionEvaluator::~ExpressionEvaluator()
{
	delete pValue;
};

void ExpressionEvaluator::logToScreen()
{
	cout << "[ -" << countValue << "- operands]\n";
	string result = "";
	string Val = "";
	bool flag = true;

	for (int i = 0; i < countValue; i++)
	{
		if (pValue[i] < 0)
		{
			Val = Beauty(to_string(pValue[i]));
			result += "(" + Val + ")";
		}
		else
		{
			Val = Beauty(to_string(pValue[i]));
			result += Val;
		}

		if (i == countValue - 1) break;

		if (typeid(*this) == typeid(CustomExpressionEvaluator))
		{
			if (flag) 
			{
				result += " div ";
				flag = false;
			}
			else 
			{
				result += " plus ";
			}
		}

		if (typeid(*this) == typeid(Divisor)) result += " div ";
		if (typeid(*this) == typeid(Summator)) result += " plus ";
	}
	
	cout << result << '\n';


	Val = Beauty(to_string(calculate()));

	cout << "[-RESULT- " + Val + " ]" << endl;
}

void ExpressionEvaluator::logToFile(const string& filename)
{
	std::ofstream log(filename, std::ios_base::app | std::ios_base::out);
	log << "[ -" << countValue << "- operands]\n";
	string result = "";
	string Val = "";
	bool flag = true;

	for (int i = 0; i < countValue; i++)
	{
		if (pValue[i] < 0)
		{
			Val = Beauty(to_string(pValue[i]));
			result += "(" + Val + ")";
		}
		else
		{
			Val = Beauty(to_string(pValue[i]));
			result += Val;
		}

		if (i == countValue - 1) break;

		if (typeid(*this) == typeid(CustomExpressionEvaluator))
		{
			if (flag) 
			{
				result += " div ";
				flag = false;
			}
			else
			{
				result += " plus ";
			}
		}

		if (typeid(*this) == typeid(Divisor)) result += " div ";
		if (typeid(*this) == typeid(Summator)) result += " plus ";
	}

	log << result << '\n';


	Val = Beauty(to_string(calculate()));

	log << "[-RESULT- " + Val + " ]" << endl;

}

void ExpressionEvaluator::setOperand(int pos, double value)
{
	pValue[pos] = value;
}

void ExpressionEvaluator::setOperands(double ops[], int n)
{
	for (int i = 0; i < n; i++)
	{
		pValue[i] = ops[i];
	}
}