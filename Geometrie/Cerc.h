#define PI 3.14159
#include "Punct.h"
using namespace std;
class Cerc:public Punct {
	protected:
		float raza;
	public:
		Cerc(float raza = 0, float x = 0, float y = 0, float z = 0);
		virtual void afis() const;
		virtual float getArie() const;
		virtual float getPerimetru() const;
		virtual float getVolum() const;
};
