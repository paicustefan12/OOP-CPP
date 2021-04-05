#include <iostream>
#include <cstring>
#pragma once
using namespace std;

class Persoana {
	protected:
		char* nume;
		int varsta;
	public:
		Persoana(char* nume = NULL, int varsta = 0);
		virtual void afis()const;
		virtual float getVenit()const = 0;
				float getVarsta()const;
		Persoana(const Persoana& P);
		Persoana & operator = (const Persoana& P);
		virtual ~Persoana();
};
