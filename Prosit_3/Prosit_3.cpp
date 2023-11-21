#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
#include "CLparcours2D.h"
#include "CLparcours3D.h"
#include "CLpoint3D.h"

int main() {
	// création des points
	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	// création du parcours
	CLParcours* parcours;

	// définitions des points
	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint(1.0, 1.0);
	p3 = new CLpoint(2.0, 2.0);
	//définition du parcours
	parcours = new CLparcours2D(3);

	//ajout des points au parcours
	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	//afficher la distance du parcours
	parcours->message();
	cout << parcours->calculDistance() << endl;

	//suppression du parcours et des points
	delete parcours;
	delete p1;
	delete p2;
	delete p3;

	p1 = new CLpoint3D(0.0, 0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);
	p3 = new CLpoint3D(2.0, 2.0, 2.0);
	parcours = new CLparcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	delete parcours;
	delete p1;
	delete p2;
	delete p3;

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficherCoordo();

	delete p1;
	delete p2;

	return 0;
}
