#include "hello.h"
#include "Lista.h"
#include "Wektor.h"
#include "Zespolona.h"

#include <iostream>

using namespace std;

int main() {
	hello();

	Wektor *w;

	w = new Wektor(1, 2);
	w->kimJestem();
	w->kimJestemVirtual();

	Zespolona *z = new Zespolona(3, 4);
	w = z;
	w->kimJestem();
	w->kimJestemVirtual();
	z->kimJestem();
	z->kimJestemVirtual();

	Lista l = Lista<Wektor>();

	l.dodajNaKoniec(new Wektor(1, 2));
	l.dodajNaKoniec(new Wektor(3, 4));
	l.dodajNaKoniec(new Wektor(5, 6));

	cout << l.policz() << endl;

	for (int i = 0; i < l.policz(); i++) {
		l.wez(i)->opisz();
	}
}