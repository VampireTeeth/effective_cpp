/*
 * Rational.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: steven
 */

#include "Rational.h"

namespace std {

Rational::Rational(int n, int d):n(n),d(d) {

}

Rational::~Rational() {

}

//const Rational& operator*(const Rational& lhs, const Rational& rhs) {//Wrong implementation -- returning a reference of local object
const Rational operator*(const Rational& lhs, const Rational& rhs) {
	return Rational(lhs.n * rhs.n, lhs.d * rhs.d);
}

ostream& operator<<(ostream& os, const Rational& r) {
	os << "Rational[numerator = " << r.n << ", denominator = " << r.d << "]";
	return os;
}


} /* namespace std */
