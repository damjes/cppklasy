#ifndef LISTA_H
#define LISTA_H

template <class T>
class Lista {
	private:
		Lista *nastepny;
		T *dane;
	public:
		Lista() {
			nastepny = nullptr;
			dane = nullptr;
		}

		~Lista() {
			delete dane;
			delete nastepny;
		}

		void dodajNaKoniec(T *dane) {
			if (this->dane == nullptr) {
				this->dane = dane;
			} else {
				if (nastepny == nullptr) {
					nastepny = new Lista();
				}
				nastepny->dodajNaKoniec(dane);
			}
		}

		T* wez(int indeks) {
			if (indeks == 0) {
				return dane;
			} else {
				if (nastepny == nullptr) {
					return nullptr;
				} else {
					return nastepny->wez(indeks - 1);
				}
			}
		}

		void usunIndeks(int indeks) {
			if (indeks == 0) {
				if (nastepny != nullptr) {
					dane = nastepny->dane;
					nastepny = nastepny->nastepny;
				} else {
					dane = nullptr;
				}
			} else {
				if (nastepny != nullptr) {
					nastepny->usunIndeks(indeks - 1);
				}
			}
		
		}

		void usunElement(T *dane) {
			if (this->dane == dane) {
				usunIndeks(0);
			}

			if (nastepny != nullptr) {
				nastepny->usunElement(dane);
			}
		}

		bool pusta() {
			return dane == nullptr;
		}

		int policz() {
			if (nastepny == nullptr) {
				if (dane == nullptr) {
					return 0;
				} else {
					return 1;
				}
			} else {
				return 1 + nastepny->policz();
			}
		}
};

#endif