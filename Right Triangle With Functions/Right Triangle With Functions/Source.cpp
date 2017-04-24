// function example
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;
double r, param, param1, sideBdivided;
double rightTriangleSlope(double sideA, double sideB)//finding the slope of a right triangle
{
	param = sideA*sideA;
	param1 = sideB * sideB;
	r = sqrt(param + param1);
	//r = sqrt((sideA * sideA) + (sideB * sideB))
	return r;
}
double rightTriangleBase(double sideC, double sideB)//finding the base of a right triangle
{
	param = sideC*sideC;
	param1 = sideB * sideB;
	r = sqrt(param - param1);
	//r = sqrt((sideA * sideA) + (sideB * sideB))
	return r;
}
double rightTriangleHeight(double sideC, double sideA)//finding the height of a right triangle
{
	param = sideC*sideC;
	param1 = sideA * sideA;
	r = sqrt(param - param1);
	//r = sqrt((sideA * sideA) + (sideB * sideB))
	return r;
}
double equalateralRise(double sideA, double sideB)//finding the Rise of a equalateral triangle
{
	param = sideA*sideA;
	sideBdivided = sideB / 2;
	param1 = sideBdivided * sideBdivided;
	r = sqrt(param + param1);
	//r = sqrt((sideA * sideA) + (sideB * sideB))
	return r;
}
double equalateralHeight(double sideA, double sideB)//finding the Rise of a equalateral triangle
{
	param = sideA*sideA;
	param1 = (sideBdivided * sideBdivided) / 4;
	r = sqrt(param - param1);
	//r = sqrt((sideA * sideA) + (sideB * sideB))
	return r;
}
int main()
{
	string choiceYes, rightBase, rightHeight, rightSlope, sideOf;
	double base, height, slope, perimeter;
	int triangleType;
	cout << "Welcome to the triangle answer key. \n";
	do{
		cout << "What type of triangle are you looking to solve?\n 1 for Right Triangle \n 2 for Isoceles Triangles \n 3 for Equilateral. ";
		cin >> triangleType;
		if (triangleType == 1)//goes into right triangle do loop
		{
			do{	//This is a do while statement
				cout << "What side of a right triangle are you looking for?\n base, height, or slope? ";
				cin >> sideOf;
				if (sideOf == "slope" || sideOf == "Slope")
				{
					cout << "Please enter the base: ";
					cin >> base;
					cout << "Please enter the height: ";
					cin >> height;
					slope = rightTriangleSlope(base, height);
					cout << "The result is " << slope << endl;
				}
				if (sideOf == "base" || sideOf == "Base")//finding the base of a triangle
				{
					cout << "Please enter the slope: ";
					cin >> slope;
					cout << "Please enter the height: ";
					cin >> height;
					base = rightTriangleBase(slope, height);
					cout << "The result is " << base << endl;
				}
				if (sideOf == "height" || sideOf == "height")//finding the height of a triangle
				{
					cout << "Please enter the slope: ";
					cin >> slope;
					cout << "Please enter the baset: ";
					cin >> base;
					height = rightTriangleHeight(slope, base);
					cout << "The result is " << height << endl;
				}
				cout << "Do you want to do another right Triangle?";
				cin >> choiceYes;
			} while (choiceYes == "Yes");//ending right triangle do while
			cout << "I hope you trust someone else to do your work.";
		}
		else if (triangleType == 2)//begining of the iso triangle
		{
			do{	//This is a do while statement
				cout << "What side of a isosceles triangle are you looking for?\n base, height, or slope? ";
				cin >> sideOf;
				if (sideOf == "slope" || sideOf == "Slope")//slope of the iso
				{
					cout << "Please enter the base: ";
					cin >> base;
					cout << "Please enter the height: ";
					cin >> height;
					slope = equalateralRise(base, height);
					cout << "The result is " << slope << endl;
				}
				else if (sideOf == "Height" || sideOf == "height")//Height of the iso
				{
					cout << "Please enter the base: ";
					cin >> base;
					cout << "Please enter the Perimeter/Rise: ";
					cin >> perimeter;
					height = equalateralHeight(base, perimeter);
					cout << "The result is " << height << endl;
				}
				else if (sideOf == "base" || sideOf == "Base")//Base of the iso
				{
					cout << "Please enter the base: ";
					cin >> perimeter;
					cout << "Please enter the height: ";
					cin >> height;
					slope = equalateralHeight(base, height);
					cout << "The result is " << slope << endl;
				}
				cout << "Do you want to do another right Triangle?";
				cin >> choiceYes;
			} while (choiceYes == "Yes");//ending iso triangle do while
			cout << "I hope you trust someone else to do your work.";
		}
		else if (triangleType == 3)//begining of the equalateral triangle
		{

		}
		cout << "What type of triangle are you looking to solve?\n 1 for Right Triangle \n 2 for Isoceles Triangles \n 3 for Equilateral. ";
		cin >> triangleType;
	} while (triangleType > 3);
	cout << "Have a nice day!";
	return 0;
}