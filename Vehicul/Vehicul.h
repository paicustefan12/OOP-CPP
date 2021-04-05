#include <iostream>
#include <cstring>
#pragma once

using namespace std;

class Vehicul {
	protected:
		float masa;
		char* culoare;
	public:
		virtual int getCapacitate() = 0;
		virtual void afis();
		virtual float getMasa();
		Vehicul(float masa = 0, char* culoare = NULL);
		Vehicul & operator = (const Vehicul& V);
		Vehicul(const Vehicul& V);
		virtual ~Vehicul(); 
		virtual void modif(float _masa, char* _culoare);
};
