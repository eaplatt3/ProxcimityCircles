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


//if (d == (r1 + r2))
	//touching
//else (d < (r1 + r2))
	//overlapping