#pragma once

#include <iostream> 
#include <fstream>
#include <string> 
using namespace std;

class Airplane {

protected:
	string Name;
	string Airline;
	int YearOfIssue = -1, Weight = 0;
public:
	Airplane();

	Airplane(string name_, string airline_, int year_, int weight_);

	void SetModel(const string name_);

	void SetAirline(const string airline_);

	void SetYearOfIssue(const int year_);

	void PrintInfo();
};