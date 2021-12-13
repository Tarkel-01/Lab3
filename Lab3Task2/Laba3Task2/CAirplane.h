#pragma once
#include <iostream> 
#include <fstream>
#pragma once
#include <iostream> 
#include <string> 
using namespace std;

#include "Airplane.h"
#include "ILoadble.h"
class CAirplane: public Airplane, public ILoadble {
protected:
	int CargoCapacity, Cargo = 0;
public:
	CAirplane(string name_, string airline_, int year_, int weight_, int cargo_);
	void load(int value);
	
};