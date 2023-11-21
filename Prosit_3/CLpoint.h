#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

class CLpoint{
	double x, y;
	static size_t nPoints;
public:
	CLpoint(double, double);
	virtual void afficherCoordo();
	double getX();
	double getY();
};

CLpoint::CLpoint(double new_x, double new_y) {
	x = new_x;
	y = new_y;
}

void CLpoint::afficherCoordo(){
	cout << "Les coordonnes sont : " << "(" << this->x << ";" << this->y << ")" << endl;
}

double CLpoint::getX() {
	return this->x;
}

double CLpoint::getY() {
	return this->y;
}
