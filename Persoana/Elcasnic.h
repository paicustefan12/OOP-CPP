#include <iostream>
#include "Produs.h"
using namespace std;

class Elcasnic:public Produs {
	protected:
		float voltaj;
	public:
		Elcasnic(float voltaj = 0, float pret = 0, char* serie);
		Elcasnic(const Elcasnic& e):Produs(e){};
		Elcasnic & operator = (const Elcasnic e);
		friend ostream& operator << (ostream &d, const Elcasnic &e);
		friend istream& operator >> (istream &d, Elcasnic &e);
};
