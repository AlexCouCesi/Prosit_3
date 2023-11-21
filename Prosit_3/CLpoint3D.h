#pragma once
#include "CLpoint.h"

class CLpoint3D : public CLpoint {
	double z;
public:
	CLpoint3D(double, double, double);
	void afficherCoordo() override;
	double getZ();
};

CLpoint3D::CLpoint3D(double new_x, double new_y, double new_z): CLpoint(new_x, new_y), z(new_z){}

void CLpoint3D::afficherCoordo() {
	this->CLpoint::afficherCoordo();
	cout << "(" << this->z << ")";
}

double CLpoint3D::getZ() {
	return this->z;
}
