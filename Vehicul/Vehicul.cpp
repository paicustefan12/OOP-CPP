#include "Vehicul.h"

using namespace std;

Vehicul::Vehicul(float masa, char* culoare) {
	this->masa = masa;
	this->culoare = new char[strlen(culoare) + 1];
	strcpy(this->culoare, culoare);
}

Vehicul& Vehicul::operator =(const Vehicul& V) {
	masa = V.masa;
	culoare = new char[strlen(V.culoare) + 1];
	strcpy(culoare, V.culoare);
	return *this;
}

Vehicul::Vehicul(const Vehicul& V) {
	*this = V;
}

float Vehicul::getMasa() {
	return masa;
}

void Vehicul::afis() {
	cout<<"masa:"<<masa<<' '<<"culoare:"<<culoare<<'\n';
}

Vehicul::~Vehicul() {
	delete [] culoare;
}
