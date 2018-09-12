#pragma once
#pragma once
#include <string>
using namespace std;

class circle {
private:
	double radius;
	double xCord;
	double yCord;
	string sName;

public:
	circle(double r, double x, double y, string s) {

		radius = r;
		xCord = x;
		yCord = y;
		sName = s;
	}

	circle() {
		radius = 1;
		xCord = 1;
		yCord = 1;
		sName = "TempCircle";

	}

	void setRadius(double r) {
		radius = r;
	}

	void setXcord(double x) {
		xCord = x;
	}

	void setYcord(double y) {
		yCord = y;
	}

	void setCircleName(string s) {
		sName = s;
	}

	double getRadius() {
		return radius;
	}

	double getXcord() {
		return xCord;
	}

	double getYcord() {
		return yCord;
	}

	string getCircleName() {
		return sName;
	}

	void print();
	double prox(double x, double y, double x1, double x2, double r, double r1);
};