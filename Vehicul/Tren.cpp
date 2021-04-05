#include "Tren.h"

using namespace std;

Tren::Tren(float masa, char* culoare, Vagon* v, int nr_vagoane):Vehicul(masa, culoare) {
	this->v = new Vagon[nr_vagoane];
	int i;
	for(i = 0; i < nr_vagoane; i++)
		this->v[i] = v[i];
	this->nr_vagoane = nr_vagoane;
}

Tren& Tren::operator =(const Tren& T) {
	int i;
	(Vehicul&) (*this) = T;
	v = new Vagon[T.nr_vagoane];
	for(i = 0; i < nr_vagoane; i++)
		v[i] = T.v[i];
	return *this;
}

Tren::Tren(const Tren& T) {
	*this = T;
}

int Tren::getCapacitate() {
	int i, cap = 0;
	for (i = 0; i < nr_vagoane; i++)
		cap = cap;
	return cap;
}

Tren::~Tren() {
	delete [] v;
}
void Tren::afis() {
	Vehicul::afis();
	for (int i = 0; i < nr_vagoane; i++)
	{
		v[i].afis();
	}
	cout<<nr_vagone;
}
