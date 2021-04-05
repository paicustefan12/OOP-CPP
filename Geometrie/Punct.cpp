#include "Punct.h"

Punct::Punct(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
} 

 void Punct::afis()const {
	cout<<x<<' '<<y<<' '<<z;
}

 float Punct::getArie()const {
	return 0;
}

 float Punct::getPerimetru() const{
	return 0;
}

 float Punct::getVolum() const {
	return 0;
}

float getDist(const Punct &p1, const Punct &p2) {
	float a;
	a = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z));
	return a;
}

 Punct::~Punct(){
}
