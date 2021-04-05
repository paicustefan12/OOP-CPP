#include "Cerc.h"
using namespace std;
class Cilindru:public Cerc{
	float inaltime;
	public:
		Cilindru(float inaltime = 0, float raza = 0, float x = 0, float y = 0, float z = 0);
		virtual void afis() const;
		virtual float getArie() const;
		virtual float getPerimetru() const;
		virtual float getVolum() const;
};
