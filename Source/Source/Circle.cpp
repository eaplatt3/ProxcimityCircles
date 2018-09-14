//Methods For Circle Class
#include<iostream>
#include "Circle.h"

using namespace std;

//Used to Display the Users Input on the Screen 
void circle::print() {
	cout << sName << " Circle" << endl;
	cout << "Radius is: " << radius << endl;
	cout << "Middle X-coordinate is: " << xCord << endl;
	cout << "Middle Y-coordinate is: " << yCord << endl;
	cout << " " << endl;
}

//Function to Determine the Distance of the Two Circles
double circle::prox(double x1, double y1, double x2, double y2, double r1, double r2) {

	double distance;

	//Takes User Input 
	//Preforms the Arithmetic to Find the Distance Between the Two Circles 
	distance = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2)));

	//Checks the Solution to Equation Above ^
	//To Determine if the Circles
	//Are Touching, Overlapping, or Apart
	//Displays what is Determined on the Console Screen 
	if (distance == (r1 + r2)) {
		cout << "The Distance Between the Two Circle is: " << distance << endl;
		cout << "Circles Are Touching" << endl;
	}

	if (distance < (r1 + r2)) {
		cout << "The Distance Between the Two Circle is: " << distance << endl;
		cout << "Circles Are Overlapping" << endl;
	}

	else {
		cout << "The Distance Between the Two Circle is: " << distance << endl;
		cout << "Circles Are Apart" << endl;
	}

	return distance;

}