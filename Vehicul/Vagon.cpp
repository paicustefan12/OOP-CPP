#include "Vagon.h"

using namespace std;

Vagon::Vagon(float masa, char* culoare, int nr_locuri,char* cod_CFR):Vehicul(masa, culoare) {
	this->nr_locuri = nr_locuri;
	strcpy(this->cod_CFR, cod_CFR);
}

int Vagon::getCapacitate() {
	return nr_locuri;
}

void Vagon::afis() {
	Vehicul::afis();
	cout<<"nr locuri:"<<nr_locuri<<' '<<"cod CFR:"<<cod_CFR<<'\n';
}
