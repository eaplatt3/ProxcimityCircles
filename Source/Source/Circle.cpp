#include<iostream>
#include "Circle.h"

using namespace std;


void circle::print() {
	cout << s << " Circle" << endl;
	cout << "Radius is: " << radius << endl;
	cout << "Middle X-coordinate is: " << x << endl;
	cout << "Middle Y-coordinate is: " << y << endl;
	cout << " " << endl;


}


//if (d == (r1 + r2))
	//touching
//else (d < (r1 + r2))
	//overlapping