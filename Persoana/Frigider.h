#include <iostream>
#include <cstring>
#include "Elcasnic.h"
using namespace std;
class Frigider:public Elcasnic {
	float dimensiuni[3];
	char* marca;
	public:
		float getVolum()const;
		Frigider(float dimensiuni[],  char *marca = NULL, float voltaj = 0, float pret = 0, char* serie = NULL);
		Frigider(const Frigider& f):Elcasnic(f){};
		Frigider & operator = (const Frigider f);
		friend istream& operator >> (istream &d, Frigider &f);
		friend ostream& operator << (ostream &d, const Frigider &f);
		~Frigider();
};
