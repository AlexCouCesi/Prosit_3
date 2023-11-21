#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "CLpoint3D.h"
using namespace std;

class CLParcours
{protected:
	vector <CLpoint*> points;
	void message(uint16_t dim);
public:
	CLParcours(int);
	virtual void ajouterPoint(CLpoint*);
	virtual double calculDistance() = 0;
	virtual void message() = 0;
};

CLParcours::CLParcours(int) : points(vector<CLpoint*>()){}

void CLParcours::message(uint16_t dim) {
	cout << "Calcul d'un parcours de type" << dim << "D :\n";
}

void CLParcours::ajouterPoint(CLpoint* new_point) {
	this->points.push_back(new_point);
}

void CLParcours::ajouterPoint(CLpoint3D* new_point) {
	points3D.push_back(new_point);
}
