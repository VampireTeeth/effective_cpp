/*
 * Main.cpp
 *
 *  Created on: Nov 11, 2013
 *      Author: weikeliu
 */


#include <iostream>
#include "Natural.h"
using namespace std;


int main(int argc, char** argv) {
	Natural n1(3);
	Natural n2(n1);
	cout << "n1 at " << &n1 << endl;
	cout << "n2 at " << &n2<< endl;
}
