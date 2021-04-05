#include "Vehicul.h"

using namespace std;

class Vagon:public Vehicul {
	private:
		int nr_locuri;
		char cod_CFR[10];
	public:
		Vagon(float masa = 0, char* culoare = NULL, int nr_locuri = 0, char* cod_CFR = NULL);
		int getCapacitate();
		virtual void afis();
};
