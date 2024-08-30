/*
Title: Chapter 2 Exercise 7 - Ocean Levels
File Name: Chapter2Ex7_Tyler_Hively.cpp
Programmer: Tyler Hively
Date: 08/30/2024
Requirements: 
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, 
write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of millimeters the ocean level rises per year..
*/
#include <iostream>
using namespace std;
//const double levelRise = 1.5;

int main()
{
	double levelRise;
	double YearLevel5;
	double YearLevel7;
	double YearLevel10;
	double YearLevel15;	
	cout << "Please enter the millimeter rise you expect each year: ";
	cin >> levelRise;
	
	YearLevel5 = levelRise * 5;
	YearLevel7 = levelRise * 7;
	YearLevel10 = levelRise * 10;
	YearLevel15 = levelRise * 15;
	cout << "After 5 years, the ocean will have risen " << YearLevel5 << " millimeters" << endl;
	cout << "After 7 years, the ocean will have risen " << YearLevel7 << " millimeters" << endl;
	cout << "After 10 years, the ocean will have risen " << YearLevel10 << " millimeters" << endl;
	cout << "After 15 years, the ocean will have risen " << YearLevel15 << " millimeters" << endl;
	return 0;
}

