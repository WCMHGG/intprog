#include <iostream>
#include <string>
using namespace std;

int main() {
	int radius;
    int u_unit;
    int area;
    string unit;
	cout << "Please input the circle's radius" << endl;
	cin >> radius; // user input integer radius
    cout << "Press 1 or 2 for these measurement units" << endl << "1: cm  2: mm" << endl;
    cin >> u_unit; // user input what unit type
    switch (u_unit)
    {
        case 1:
            unit = "cm";
            break;
        case 2: 
            unit = "mm";
            break;
        default:
            unit = "inch(es)";
    }

	area = 3.14 * radius * radius; // area calculation based off of user input
	cout << "The area is:" << endl << area << " " << unit << endl; // output calculation
	return 0;
}
