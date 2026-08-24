/* 
   An interactive program that computes the area of a rectangle. */

#include <iostream>
using namespace std;

int main () {

	int length;
	int width;

	cout << "Enter length: ";
	cin >> length;

	cout << "Enter width: ";
	cin >> width;

	int area = length * width;

	cout << "The area of the rectangle is ";
	cout << area << endl; 
	
	return 0;
}
