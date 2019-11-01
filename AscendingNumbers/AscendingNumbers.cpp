// AscendingNumbers.cpp : Defines the entry point for the console application.
// Christy Mims
// CSC 101
// February 1, 2018
// This program puts numbers in ascending order.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	// variables
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	// prompt the user
	cout << "Enter three numbers with a space." << endl;
	cin >> num1 >> num2 >> num3;

	cout << "The ascending order is " << endl;

	// calculate and output data
	if ((num1 <= num2) && (num2 <= num3))
	{
		cout << num1 << " " << num2 << " " << num3 << endl;
	}
	else if ((num1 <= num3) && (num3 <= num2))
	{
		cout << num1 << " " << num3 << " " << num2 << endl;
	}
	else if ((num2 <= num1) && (num1 <= num3))
	{
		cout << num2 << " " << num1 << " " << num3 << endl;
	}
	else if ((num2 <= num3) && (num3 <= num1))
	{
		cout << num2 << " " << num3 << " " << num1 << endl;
	}
	else if ((num3 <= num1) && (num1 <= num2))
	{
		cout << num3 << " " << num1 << " " << num2 << endl;
	}
	else
	{
		cout << num3 << " " << num2 << " " << num1 << endl;
	}


	// Pause the output
	cout << "Press any key to continue." << endl;
	cin.get();
	cin.get();


    return 0;
}

