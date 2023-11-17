#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
#include "CLParcours.h"
#include "CLparcours2D.h"
#include "CLparcours3D.h"
#include "CLpoint3D.h"

int main() {
	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLParcours* parcours;

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint(1.0, 1.0);
	p3 = new CLpoint(2.0, 2.0);
	parcours = new CLparcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	p1 = new CLpoint3D(0.0, 0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);
	p3 = new CLpoint3D(2.0, 2.0, 2.2);
	parcours = new CLparcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficherCoordo();
	return 0;
}