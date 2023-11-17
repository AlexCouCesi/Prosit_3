#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

class CLpoint{
public:
	double x, y;
	CLpoint(double, double);
	virtual void afficherCoordo() const;
};

CLpoint::CLpoint(double new_x, double new_y) {
	x = new_x;
	y = new_y;
}

void CLpoint::afficherCoordo() const{
	cout << "(" << x << ";" << y << ")" << endl;
}