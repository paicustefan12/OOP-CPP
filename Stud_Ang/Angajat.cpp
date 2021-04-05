#include "Angajat.h"

using namespace std;

Angajat::Angajat(char* nume, int varsta, float salariu, char* firma):Persoana(nume, varsta) {
	this->firma = new char[20];
	strcpy(this->firma, firma);
	this->salariu = salariu;
}

float Angajat::getVenit()const{
	return 8*salariu;
}

Angajat::~Angajat(){
	delete [] firma;
}

Angajat & Angajat::operator = (const Angajat& A) {
	nume = new char[strlen(A.nume) + 1];
	strcpy(nume, A.nume);
	varsta = A.varsta;
	salariu = A.salariu;
	firma = new char[strlen(A.firma) + 1];
	strcpy(firma, A.firma);
	return (*this);
} 

Angajat::Angajat(const Angajat& A) {
	*this = A;
}
