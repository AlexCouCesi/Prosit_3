#pragma once
#include "CLpoint.h"

class CLpoint3D : public CLpoint {
public:
	double z;
	CLpoint3D(double, double, double);
	void afficherCoordo() const override;
};

CLpoint3D::CLpoint3D(double new_x, double new_y, double new_z): CLpoint(new_x, new_y), z(new_z){}

void CLpoint3D::afficherCoordo() const {
	cout << "(" << x << ";" << y << ";" << z << ")" << endl;
}