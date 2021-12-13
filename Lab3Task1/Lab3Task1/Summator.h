#pragma once
#include "ExpressionEvaluator.h"

class Summator: public ExpressionEvaluator
{
public:
	Summator() : ExpressionEvaluator(20) {}

	Summator(int n) : ExpressionEvaluator(n) {};

	virtual double calculate();
};