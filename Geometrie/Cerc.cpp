#include "Cerc.h"

Cerc::Cerc(float raza, float x, float y, float z):Punct(x, y, z) {
	this->raza = raza;
}

 float Cerc::getArie()const {
	return (PI * raza * raza);
}

 float Cerc::getPerimetru() const{
	return (2 * PI * raza);
}

 float Cerc::getVolum() const {
	return 0;
}

 void Cerc::afis()const {
	cout<<raza<<' ';
	Punct::afis();
}
