// Lab3Task1.cpp by Romanenko A.A.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "ExpressionEvaluator.h"
#include "IShuffle.h"
#include "Divisor.h"
#include "Summator.h"
#include "CustomExpressionEvaluator.h"

int main()
{
	ExpressionEvaluator* evaluators[3];

	double example1[] = { 15, -3.5, 10.5, -2.1, 3.3, 4, 6.3 };
	evaluators[0] = new Summator(7);
	evaluators[0]->setOperands(example1, 7);

	evaluators[1] = new CustomExpressionEvaluator(5);
	evaluators[1]->setOperand(0, 15);
	evaluators[1]->setOperand(1, 10);
	evaluators[1]->setOperand(2, -3);
	evaluators[1]->setOperand(3, 12);
	evaluators[1]->setOperand(4, -6.5);

	evaluators[2] = new Divisor(3);
	double example3[] = { 1.5, 4, -2.5};
	evaluators[2]->setOperands(example3, 3);
	for (int i = 0; i < 3; i++)
	{
		evaluators[i]->logToScreen();
		cout << evaluators[i]->calculate() << endl;
		evaluators[i]->logToFile("Log.txt");
	}
	
	cout << "\n" << endl;

	for (int i = 0; i < 3; i++)
	{
		if (dynamic_cast<IShuffle*>(evaluators[i]) != nullptr)
		{
			dynamic_cast<IShuffle*>(evaluators[i])->shuffle();
			evaluators[i]->logToScreen();
			cout << evaluators[i]->calculate() << std::endl;
		}
	}

	for (int i = 0; i < 3; i++)
		delete evaluators[i];
}


