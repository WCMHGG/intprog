//============================================================================
// Name        : areacircle.cpp
// Author      : Henri Grant
// Version     :
// Copyright   : https://creativecommons.org/licenses/by/4.0/
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int radius;
	cout << "Please input the circle's radius" << endl;
	cin >> radius; // user input integer radius
	int area = 3.14 * radius * radius; // area calculation based off of user input
	cout << area << endl; // output calculation
	return 0;
}
