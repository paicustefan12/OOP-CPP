
#include "Elcasnic.h"
using namespace std;

Frigider::Frigider(float dimensiuni[],  char *marca, float voltaj, float pret, char* serie):Elcasnic(voltaj, pret, serie) {
	int i;
	for (i = 0; i < 3; i++)
		this->dimensiuni[i] = dimensiuni[i];
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca, marca);
}

Frigider& Frigider::operator  = (const Frigider f) {
	(Elcasnic&) (*this) = f;
	int i;
	for (i = 0; i < 3; i++)
		(*this).dimensiuni[i] = dimensiuni[i];
	(*this).marca = new char[strlen(f.marca) + 1];
	strcpy((*this).marca, f.marca);
	return *this;
}

Frigider::Frigider(const Frigider &f):Elcasnic(f) {
	*this = f;
}

istream& operator >> (istream &d, Frigider &f) {
	d>>(Elcasnic&)f;
	char buffer[50];
	int i;
	for (i = 0; i < 3; i++)
		d>>f.dimensiuni[i];
	d>>buffer;
	f.marca = new char[strlen(buffer) + 1];
	strcpy(f.marca, buffer);
	return d;
}

ostream& operator << (ostream &d, const Frigider &f) {
	d<<(Elcasnic&)f;
	int i;
	for (i = 0; i < 3; i++)
		d<<f.dimensiuni[i]<<' ';
	d<<f.marca;
	return d;
}

float Frigider::getVolum()const {
	int i;
	float volum = 1;
	for (i = 0;i < 3; i++)
		volum = volum*dimensiuni[i];
	return volum;
}
