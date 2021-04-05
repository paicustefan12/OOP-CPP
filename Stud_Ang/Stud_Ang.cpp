#include "Stud_Ang.h"

using namespace std;

Stud_Ang::Stud_Ang(char* nume, int varsta, float *note, float salariu, char* firma, float partime):Student(nume, varsta, note), Angajat(nume, varsta, salariu, firma){
	this->partime = partime;
}

float Stud_Ang::getVenit()const {
	float venit = 0;
	venit = student::get_venit() + partime * salariu;
	return venit;
}
