#include "Persoana.h"
using namespace std;

class Angajat:virtual public Persoana {
	protected:
		float salariu;
		char* firma;
	public:
		Angajat(char* nume = NULL, int varsta = 0, float salariu = 0, char* firma = NULL);
		virtual float getVenit()const;
		virtual ~Angajat();
		Angajat & operator = (const Angajat& A);
		Angajat(const Angajat& A);
};
