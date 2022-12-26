#include <iostream>
using namespace std;
int main() {
	float length, width, Area, Perimeter;
	//Get Dimensions
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	//Define laws
	Area = (length)*width;
	Perimeter = (length + width) * 2;
	//Display outputs
	cout << "Area = " << Area << "\n" << "Perimeter = " << Perimeter;
}