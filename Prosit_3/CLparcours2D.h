#pragma once
#include "CLParcours.h"

class CLparcours2D : public CLParcours {
public:
	CLparcours2D();
	CLparcours2D(int);
	void ajouterPoint(CLpoint*) override;
	double calculDistance()override;
	void message() override;
};

CLparcours2D::CLparcours2D() : CLParcours(){}

CLparcours2D::CLparcours2D(int new_num) : CLParcours(new_num) {}

void CLparcours2D::ajouterPoint(CLpoint* new_point) {
	CLParcours::ajouterPoint(new_point);
}

double CLparcours2D::calculDistance(){
	double distance = 0.0;
	for (size_t i = 1; i < points.size(); i++) {
		double dx = points[i]->x - points[i - 1]->x;
		double dy = points[i]->y - points[i - 1]->y;
		distance += sqrt(dx * dx + dy * dy);
	}
	return distance;
}

void CLparcours2D::message() {
	cout << "Calcul d'un parcours de type 2D : " << endl;
}