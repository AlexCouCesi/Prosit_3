#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "CLpoint3D.h"
using namespace std;

class CLParcours
{public :
	vector <CLpoint*> points;
	vector <CLpoint3D*> points3D;
	CLParcours();
	CLParcours(int);
	virtual void ajouterPoint(CLpoint*);
	virtual void ajouterPoint(CLpoint3D*);
	virtual double calculDistance() = 0;
	virtual void message() = 0;
};

CLParcours::CLParcours() {
	points.reserve(0);
}

CLParcours::CLParcours(int num) {
	points.reserve(num);
}

void CLParcours::ajouterPoint(CLpoint* new_point) {
	points.push_back(new_point);
}

void CLParcours::ajouterPoint(CLpoint3D* new_point) {
	points3D.push_back(new_point);
}