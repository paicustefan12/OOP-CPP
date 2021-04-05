#include <iostream>
#include <cstring>
using namespace std;

class Produs {
	protected:
		float pret;
		char* serie;
	public:
		Produs(float pret = 0, char *serie = NULL);
		Produs(const Produs& p);
		~Produs();
		Produs & operator = (const Produs p);
		friend ostream& operator << (ostream &d, const Produs &p);
		friend istream& operator >> (istream &i, Produs &p);	
};
