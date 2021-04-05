#include "Paralelipiped.h"

Paralelipiped::Paralelipiped(float inaltime, float lung, float lat, float x, float y, float z):Dreptunghi(lung, lat, x, y, z) {
	this->inaltime = inaltime;
}

 float Paralelipiped::getArie()const {
	return (2 * (Dreptunghi::getArie() + lung * inaltime + lat * inaltime));
}

 float Paralelipiped::getPerimetru() const{
	return (2 * Dreptunghi::getPerimetru() + 2 * inaltime + 4 * lat);
}

 float Paralelipiped::getVolum() const {
	return (Dreptunghi::getArie() * inaltime);
}

 void Paralelipiped::afis()const {
	cout<<inaltime<<' '<<lung<<' '<<lat<<' ';
	Dreptunghi::afis();
}
