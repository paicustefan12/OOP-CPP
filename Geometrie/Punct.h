#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Punct {
	protected:
		float x, y, z;
	public:
		Punct(float x = 0, float y = 0, float z = 0);
		virtual void afis() const;
		virtual float getArie() const;
		virtual float getPerimetru() const;
		virtual float getVolum() const;
		virtual ~Punct();
		friend float getDist(const Punct &p1, const Punct &p2);
};
