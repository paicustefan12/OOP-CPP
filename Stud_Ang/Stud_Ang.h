#include "Student.h"
#include "Angajat.h"

using namespace std;


class Stud_Ang:public Student, public Angajat {
	float partime;
	public:
		Stud_Ang(char* nume = NULL, int varsta = 0, float *note = NULL, float salariu = 0, char* firma = NULL, float partime = 0);
		virtual float getVenit()const;
};
