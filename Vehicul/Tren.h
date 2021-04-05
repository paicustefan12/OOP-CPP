#include "Vagon.h"

using namespace std;

class Tren:public Vehicul {
	private:
		Vagon* v;
		int nr_vagoane;
	public:
		Tren(float masa = 0, char* culoare = NULL, Vagon* v = NULL, int nr_vagone = 0);
		Tren(const Tren& T);
		Tren & operator = (const Tren& T);
		virtual ~Tren();
		virtual int getCapacitate();
		virtual void afis();
		
		
};
