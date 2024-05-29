#ifndef ZESPOLONA_H
#define ZESPOLONA_H

#include "Wektor.h"

#include <iostream>

using namespace std;

class Zespolona : public Wektor {
	public:
		Zespolona(double x, double y) : Wektor(x, y) {}
		double modul();
		Zespolona operator*(Zespolona z);
		void kimJestem();
		void kimJestemVirtual();
};

#endif