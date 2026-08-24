/* 
   Project 1-1
   This program converts feet to meters.
*/

#include <iostream>
using namespace std;

int main () {

	double f, m;
	f = 0.3048;

	cout << "Enter measurement in feet: ";
	cin >> f;
	m= f / 3.28;
	cout << f << "ft is equivalent to " << m << " meters" << endl;

	return 0;

}
