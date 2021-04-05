#include "Student.h"

using namespace std;

Student::Student(char* nume, int varsta, float *note):Persoana(nume, varsta) {
	int i;
	for(i = 0; i < 5; i++)
		this->note[i] = note[i];
}


float Student::getMedie()const {
	int i;
	float s = 0;
	for(i = 0; i < 5; i++)
		s = s + note[i];
	s = s / 5;
	return s; 
}

float Student::getVenit()const {
	float venit;
	if (getMedie() > 8)
		venit = 700;
	return venit;
}
