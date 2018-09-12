#include<iostream>
#include "Circle.h"

using namespace std;


void circle::print() {
	cout << sName << " Circle" << endl;
	cout << "Radius is: " << radius << endl;
	cout << "Middle X-coordinate is: " << xCord << endl;
	cout << "Middle Y-coordinate is: " << yCord << endl;
	cout << " " << endl;
}

double circle::prox(double x, double y, double x1, double y1, double r, double r1) {
	double distance;

	if (x < x1 && y < y1) {
		distance = sqrt((x1- x) + (y1 -y));

	}

	distance = sqrt((x - x1) + (y - y1));

	if (distance == (r + r1)) {
		cout << "Circles Are Touching" << endl;
	}

	else if (distance < (r + r1)) {
		cout << "Circles Are Overlapping" << endl;
	}
	else
		cout << "Circles Are Apart" << endl;

	cout << "The distance is " << distance << endl;

	return distance; 


}