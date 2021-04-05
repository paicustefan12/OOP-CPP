#include "Cilindru.h"

Cilindru::Cilindru(float inaltime, float raza, float x, float y, float z):Cerc(raza, x, y, z) {
	this->inaltime = inaltime;
}

 float Cilindru::getArie()const {
	return (2 * Cerc::getArie() + Cerc::getPerimetru() * inaltime);
}

 float Cilindru::getPerimetru() const{
	return 0;
}

 float Cilindru::getVolum() const {
	return (inaltime * PI * raza * raza);
}

 void Cilindru::afis()const {
	cout<<inaltime<<' ';
	Cerc::afis();
}
