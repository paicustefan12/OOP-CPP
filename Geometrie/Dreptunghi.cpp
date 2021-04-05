#include "Dreptunghi.h"

Dreptunghi::Dreptunghi(float lung, float lat, float x, float y, float z):Punct(x, y, z) {
	this->lung = lung;
	this->lat = lat;
}

 float Dreptunghi::getArie()const {
	return (lung * lat);
}

 float Dreptunghi::getPerimetru() const{
	return (2 * (lung + lat));
}

 float Dreptunghi::getVolum() const {
	return 0;
}

 void Dreptunghi::afis()const {
	cout<<lung<<' '<<lat<<' ';
	Punct::afis();
}
