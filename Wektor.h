#ifndef WEKTOR_H
#define WEKTOR_H

class Wektor {
	public:
		double x, y;
		Wektor(double x, double y);
		void opisz();
		Wektor dodaj(Wektor w);
		Wektor operator+(Wektor w);
		void przesun(Wektor w);
		double dlugosc();
		void kimJestem();
		virtual void kimJestemVirtual();
};

#endif