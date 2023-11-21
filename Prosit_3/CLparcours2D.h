#pragma once
#include "CLParcours.h"

class CLparcours2D : public CLParcours {
	using CLParcours::CLParcours;
public:
	double calculDistance() override;
	void message() override;
};

double CLparcours2D::calculDistance(){
	double distance = 0;
	CLpoint* pt = this->points[0];
	for (int i = 1; i < this->points.size(); i++) {
		double dx = this->points[i]->getX() - pt->getX();
		double dy = this->points[i]->getY() - pt->getY();
		distance += sqrt(dx*dx+dy*dy);
		pt = this->points[i];
	}
	return distance;
}

void CLparcours2D::message() {
	return this->CLParcours::message(2);
}
