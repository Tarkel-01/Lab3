#include<iostream>
#include "CAirplane.h"
using namespace std;
void CAirplane::load(int value) {
	if (value + Cargo <= CargoCapacity)
	{
		cout << "Done!" << endl;
		Cargo += value;
	}
	else
	{
		cout << "Wrong!" << endl;
	}
}
CAirplane::CAirplane(string name_, string airline_, int year_, int weight_, int cargo_)
{
	Name = name_;
	Airline = airline_;
	YearOfIssue = year_;
	Weight = weight_;
	CargoCapacity = cargo_;
}