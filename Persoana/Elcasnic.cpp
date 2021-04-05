
#include "Elcasnic.h"
using namespace std;

Elcasnic::Elcasnic(float voltaj, float pret, char* serie):Produs(pret, serie) {
	this->voltaj = voltaj;
}

Elcasnic::Elcasnic(const Elcasnic& e):Produs(e) {
	this->voltaj = voltaj;
}

Elcasnic& Elcasnic::operator  = (const Elcasnic e) {
	(Produs&) (*this) = e;
	(*this).voltaj = e.voltaj;
	return *this;
}

ostream& operator << (ostream &d, const Elcasnic &e) {
	d<<(Produs&)e;
	d<<' ';
	d<<e.voltaj;
	return d;
}

istream& operator >> (istream &i, Elcasnic &e) {
	d>>(Produs&)e;
	d>>e.voltaj;
	return d;
}

Elcasnic::~Elcasnic() {
	
}

