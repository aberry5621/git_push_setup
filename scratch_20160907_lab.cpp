//
//  main.cpp
//  Book Exercise 3.7
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.7 - Sort three integers
//
// TODO: accommodate equivalent inputs in ranking, e.g. input 4 8 4

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cout << "Sort Three Integers \n";
	// D
	int a = 0.0, b = 0.0, c = 0.0;

	// I
	cout << "Enter three integers (1 2 3): ";
	cin >> a >> b >> c;

	// P // O

	if (a < b && a < c && b < c)
	{
		cout << a << ' ' << b << ' ' << c << endl;
	}
	else if (a < b && a < c && b > c)
	{
		cout << a << ' ' << c << ' ' << b << endl;
	}
	else if (a > b && a < c)
	{
		cout << c << ' ' << a << ' ' << b << endl;
	}
	else if (a > b && a < c)
	{
		cout << b << ' ' << a << ' ' << c << endl;
	}
	else if (a > b && a > c && b < c)
	{
		cout << b << ' ' << c << ' ' << a << endl;
	}
	else if (a > b && a > c && b > c)
	{
		cout << c << ' ' << b << ' ' << a << endl;
	}

	return 0;
}
