//Earl Platt III
//Data Structures - BCS 370
//9/11/2018
//First Problem: Determine if 2 Circles are Touching Or Not

//Input: Prompt User for Radius, X-coordnate, & Y-Coordinate
//Output: Display the Distance of the Circles & if the Circles
//        are Touching, Overlaping, or Apart

#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main()
{
	double r;
	double x;
	double y;
	string s;

	//Creates Cirlces 
	circle c1, c2;


	c1.setCircleName("First");
	c2.setCircleName("Second");

	cout << "Answer Questions Below" << endl;
	cout << " " << endl;

	//First Section to Request User Input 
	cout << "Please Enter the Radius of the First Circle: ";
	cin >> r;
	c1.setRadius(r);
	cout << " " << endl;

	//Checks The Users Input To Make Sure It is a Number 
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> r;
		c1.setRadius(r);
		cout << " " << endl;
	}

	cout << "Please Enter the Middle X-coordinate of the First Circle: ";
	cin >> x;
	c1.setXcord(x);
	cout << " " << endl;

	//Checks The Users Input To Make Sure It is a Number 
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
		c1.setXcord(x);
		cout << " " << endl;
	}

	cout << "Please Enter the Middle Y-coordinate of the First Circle: ";
	cin >> y;
	c1.setYcord(y);
	cout << " " << endl;

	//Checks The Users Input To Make Sure It is a Number 
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> y;
		c1.setYcord(y);
		cout << " " << endl;
	}

	cout << "Please Enter the Radius of the Second Circle: ";
	cin >> r;
	c2.setRadius(r);
	cout << " " << endl;

	//Checks The Users Input To Make Sure It is a Number 
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> r;
		c2.setRadius(r);
		cout << " " << endl;
	}

	cout << "Please Enter the Middle X-coordinate of the Second Circle: ";
	cin >> x;
	c2.setXcord(x);
	cout << " " << endl;

	//Checks The Users Input To Make Sure It is a Number 
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
		c2.setXcord(x);
		cout << " " << endl;
	}

	//Last Section to Request User Input
	cout << "Please Enter the Middle Y-coordinate of the Second Circle: ";
	cin >> y;
	c2.setYcord(y);
	cout << " " << endl;

	//Checks The Users Input To Make Sure It is a Number 
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> y;
		c2.setYcord(y);
		cout << " " << endl;
	}

	//Displays Users Input for First Circle
	c1.print();
	cout << " " << endl;

	//Displays Users Input for Second Circle
	c2.print();
	cout << " " << endl;

	//Passes X & Y Coords & Radii of Both the Circles to the Mathmatical Method
	c1.prox(c1.getXcord(), c1.getYcord(), c2.getXcord(), c2.getYcord(), c1.getRadius(), c2.getRadius());


	system("pause");

	return 0;

}

