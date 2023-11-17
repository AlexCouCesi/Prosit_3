#pragma once
#include "CLParcours.h"

class CLparcours3D : public CLParcours {
public:
	CLparcours3D();
	CLparcours3D(int);
	void ajouterPoint(CLpoint3D*) override;
	double calculDistance() override;
	void message() override;
};

CLparcours3D::CLparcours3D(){
	points3D.reserve(0);
}

CLparcours3D::CLparcours3D(int new_num){
	points3D.reserve(new_num);
}

void CLparcours3D::ajouterPoint(CLpoint3D* new_point){
	CLParcours::ajouterPoint(new_point);
}

double CLparcours3D::calculDistance() {
	double distance = 0.0;
	for (size_t i = 1; i < points3D.size(); i++) {
		double dx = points3D[i]->x - points3D[i - 1]->x;
		double dy = points3D[i]->y - points3D[i - 1]->y;
		double dz = points3D[i]->z - points3D[i - 1]->z;
		distance += sqrt(dx * dx + dy * dy + dz * dz);
	}
	return distance;
}

void CLparcours3D::message() {
	cout << "Calcul d'un parcours de type 3D :" << endl;
}