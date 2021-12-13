#include<iostream>
#include "PAirplane.h"
using namespace std;
void PAirplane::load(int value) {
	if (value + Passengers <= PassengersCapacity)
	{
		cout << "Done!" << endl;
		Passengers += value;
	}
	else
	{
		cout << "Wrong!" << endl;
	}
}
PAirplane::PAirplane(string name_, string airline_, int year_, int weight_, int pass_)
{
	Name = name_;
	Airline = airline_;
	YearOfIssue = year_;
	Weight = weight_;
	PassengersCapacity = pass_;
}