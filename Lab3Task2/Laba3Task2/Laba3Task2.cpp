// Laba3Task2.cpp by Romanenko A.A.

#include <iostream>
#include <string>
using namespace std;

#include "PAirplane.h"
#include "CAirplane.h"
int main()
{
    PAirplane* Pairplanes[2];
    Pairplanes[0] = new PAirplane("PassAirplane1", "Donetsk - Moskva", 1999, 160000, 99);
    Pairplanes[1] = new PAirplane("PassAirplane1", "Donetsk - Moskva", 1999, 170000, 100);
    for (int i = 0; i < 2; i++) {
        if (typeid(*Pairplanes[i]) == typeid(PAirplane))
            Pairplanes[i]->load(100);
    }
    CAirplane* Cairplanes[2];
    Cairplanes[0] = new CAirplane("CargoAirplane1", "Donetsk - Moskva", 1999, 160000, 20000);
    Cairplanes[1] = new CAirplane("CargoAirplane1", "Donetsk - Moskva", 1999, 170000, 20001);

    for (int i = 0; i < 2; i++) {
        if (typeid(*Cairplanes[i]) == typeid(CAirplane))
            Cairplanes[i]->load(20001);
   }

    for (int i = 0; i < 2; i++)
        delete Pairplanes[i];
    for (int i = 0; i < 2; i++)
        delete Cairplanes[i];
}
