/*
 * Main.cc
 *
 *  Created on: Nov 18, 2013
 *      Author: steven
 */


#include <iostream>
#include "Rational.h"

using namespace std;



int main(int argc, char** argv) {
	Rational r1(2, 4), r2(3, 6);
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r1*r2 << endl;
	return 0;
}

