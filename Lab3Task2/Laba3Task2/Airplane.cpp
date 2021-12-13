#include<iostream>

#include "Airplane.h"
using namespace std;
Airplane::Airplane(string name_, string airline_, int year_, int weight_) {
	Name = name_;
	Airline = airline_;
	YearOfIssue = year_;
	Weight = weight_;
}
Airplane::Airplane() {
	Name = "???";
	Airline = "???";
	YearOfIssue = -1;
}
void Airplane::SetModel(const std::string name_) {
	Name = name_;
}

void Airplane::SetAirline(const std::string airline_) {
	Airline = airline_;
}

void Airplane::SetYearOfIssue(const int year_) {
	YearOfIssue = year_;
}

void Airplane::PrintInfo() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Model: " << Name << "(Year Of Issue: " << YearOfIssue << ")" << std::endl;
	std::cout << "Airline: " << Airline << std::endl;
	std::cout << std::endl;
}