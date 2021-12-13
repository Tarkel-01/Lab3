#pragma once
#include <iostream> 
#include <string> 
using namespace std;

#include "Airplane.h"
#include "ILoadble.h"
class PAirplane : public Airplane, public ILoadble {
protected:
	int PassengersCapacity, Passengers = 0;
public:
	PAirplane(string name_, string airline_, int year_, int weight_, int pass_);
	void load(int value);
};