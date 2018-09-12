#pragma once
#pragma once
#include <string>
using namespace std;

class circle {
private:
	double radius;
	double x;
	double y;
	string s;

public:
	circle(double x, double y, double r) {

		x = x;
		y = y;
		r = radius;

	}

	circle() {
		radius = 3;
		x = 5;
		y = 7;
	}

	void setRadius(double r) {
		radius = r;
	}

	void setXcord(double x) {
		x = x;
	}

	void setYcord(double y) {
		y = y;
	}

	void setCircleName(string s) {
		s = s;
	}

	double getRadius() {
		return radius;
	}

	double getXcord() {
		return x;
	}

	double getYcord() {
		return y;
	}

	string getCircleName() {
		return s;
	}

	void print();
	//void prox();
};