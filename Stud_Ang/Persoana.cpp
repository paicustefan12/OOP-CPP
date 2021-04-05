#include "Persoana.h"

using namespace std;

Persoana::Persoana(char* nume, int varsta) {
	this->nume = new char[20];
	strcpy(this->nume, nume);
	this->varsta = varsta;
}

Persoana & Persoana::operator = (const Persoana& P) {
	nume = new char[strlen(P.nume) + 1];
	strcpy(nume, P.nume);
	varsta = P.varsta;
	return (*this);
} 

Persoana::Persoana(const Persoana& P) {
	*this = P;
}

void Persoana::afis()const {
	cout<<nume<<' '<<varsta;
}

float Persoana::getVarsta()const {
	return varsta;
}

Persoana::~Persoana() {
	delete [] nume;
}
