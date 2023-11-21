#pragma once
#include "CLParcours.h"

class CLparcours3D : public CLParcours {
	using CLParcours::CLParcours;
public:
	double calculDistance() override;
	void message() override;
};

double CLparcours3D::calculDistance() {
	double distance = 0;
	CLpoint* pt = this->points[0];
	for (int i = 1; i < this->points.size(); i++) {
		double dx = this->points[i]->getX() - pt->getX();
		double dy = this->points[i]->getY() - pt->getY();
		if (CLpoint3D* p3d = dynamic_cast<CLpoint3D*>(this->points[i])) {
			if (CLpoint3D* pt3d = dynamic_cast<CLpoint3D*>(pt)) {
				double dz = p3d->getZ() - pt3d->getZ();
				distance += sqrt(dx * dx + dy * dy + dz * dz);
			}
		}
		else {
			distance += sqrt(dx * dx + dy * dy);
		}
		pt = this->points[i];
	}
	return distance;
}

void CLparcours3D::message() {
	return this->CLParcours::message(3);
}
