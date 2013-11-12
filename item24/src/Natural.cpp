/*
 * Natural.cpp
 *
 *  Created on: Nov 11, 2013
 *      Author: weikeliu
 */

#include <iostream>
#include "Natural.h"

using namespace std;

inline void Natural::init(unsigned int v) {
	value = v;
}


inline void Natural::error(const string& msg) {
	cerr << msg << endl;
}

Natural::Natural(const Natural& rhs) {
	cout << "Natural::Natural(const Natural&) being called" << endl;
	init(rhs.value);
}

Natural::Natural(int initValue){
	cout << "Natural::Natural(int) being called" << endl;
	if(initValue > 0) {
		init(initValue);
	}else {
		error("Illegal initial value");
	}
}
