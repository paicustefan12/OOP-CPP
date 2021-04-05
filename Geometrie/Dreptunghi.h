#include "Punct.h"
using namespace std;
class Dreptunghi:public Punct {
	protected:
		float lung, lat;
	public:
		Dreptunghi(float lung = 0, float lat = 0, float x = 0, float y = 0, float z = 0);
		virtual void afis() const;
		virtual float getArie() const;
		virtual float getPerimetru() const;
		virtual float getVolum() const;
};
