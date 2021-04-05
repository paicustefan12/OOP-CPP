#include "Persoana.h"
using namespace std;

class Student:virtual public Persoana {
	protected:
		float note[5];//if medie > 8.0 => bursa - 700
	public:
		Student(char* nume = NULL, int varsta = 0, float *note = NULL);
		float getMedie()const;
		virtual float getVenit()const;
		
};
