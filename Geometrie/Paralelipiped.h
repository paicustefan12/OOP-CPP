#include "Dreptunghi.h"
using namespace std;
class Paralelipiped:public Dreptunghi {
	protected:
		float inaltime;
	public:
		Paralelipiped(float inaltime = 0, float lung = 0, float lat = 0, float x = 0, float y = 0, float z = 0);
		virtual void afis() const;
		virtual float getArie() const;
		virtual float getPerimetru() const;
		virtual float getVolum() const;
};
