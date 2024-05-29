#include "Wektor.h"

#include <cmath>
#include <iostream>

using namespace std;

Wektor::Wektor(double x, double y) {
	this->x = x;
	this->y = y;
}

void Wektor::opisz() {
	cout << "x: " << x << ", y: " << y << endl;
}

Wektor Wektor::dodaj(Wektor w) {
	return Wektor(x + w.x, y + w.y);
}

Wektor Wektor::operator+(Wektor w) {
	return dodaj(w);
}

void Wektor::przesun(Wektor w) {
	x += w.x;
	y += w.y;
}

double Wektor::dlugosc() {
	return sqrt(x * x + y * y);
}

void Wektor::kimJestem() {
	cout << "Jestem wektorem" << endl;
}

void Wektor::kimJestemVirtual() {
	cout << "Jestem wektorem" << endl;
}