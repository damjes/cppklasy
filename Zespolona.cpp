#include "Zespolona.h"

Zespolona Zespolona::operator*(Zespolona z) {
	return Zespolona(x * z.x - y * z.y, x * z.y + y * z.x);
}

double Zespolona::modul() {
	return dlugosc();
}

void Zespolona::kimJestem() {
	cout << "Jestem liczbą zespoloną" << endl;
}

void Zespolona::kimJestemVirtual() {
	cout << "Jestem liczbą zespoloną" << endl;
}