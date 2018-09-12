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
double circle::prox(double x, double y, double x1, double y1, double r, double r1) {

	double distance;

	//Takes User Input 
	//Preforms the Arithmetic to Find the Distance Between the Two Circles 

	distance = sqrt((pow(x - x1, 2))+ (pow(y - y1, 2)));

	//Checks the Soulatioon to Above ^
	//To Determine if the Circles
	//Are Touching, Overlapping, or Apart
	//Displays what is Determined on the Console Screen 

	if (distance == (r + r1)) {
		cout << "Circles Are Touching" << endl;
	}

	if (distance < (r + r1)) {
		cout << "Circles Are Overlapping" << endl;
	}

	else
		cout << "Circles Are Apart" << endl;

	cout << " " << endl;

	return distance;

}