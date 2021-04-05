
#include "Produs.h"
using namespace std;


Produs::Produs(float pret, char *serie) {
	this->pret = pret;
	this->serie = new char[strlen(serie) + 1];
	strcpy(this->serie, serie);
}

Produs& Produs::operator  = (const Produs p) {
	pret = p.pret;
	serie = new char[strlen(p.serie) + 1];
	strcpy((*this).serie, p.serie);
	return *this;
}

Produs::Produs(const Produs& p){
	*this = p;
}

ostream& operator << (ostream &d, const Produs &p) {
	d<<p.pret;
	d<<' ';
	d<<p.serie;
	return d;
}

istream& operator >> (istream &i, Produs &p) {
	char buffer[50];
	d>>p.pret;
	d>>buffer;
	p.serie = new char[strlen(buffer) + 1];
	strcpy(p.serie, buffer);
	return d;
}

Produs::~Produs() {
	delete [] serie;
}
