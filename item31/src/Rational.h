/*
 * Rational.h
 *
 *  Created on: Nov 18, 2013
 *      Author: steven
 */

#ifndef RATIONAL_H_
#define RATIONAL_H_


#include <iostream>
using namespace std;


namespace std {

class Rational {
public:
	Rational(int n = 0, int d = 1);
	virtual ~Rational();
private:
	int n, d;
	friend const Rational operator*(const Rational& lhs, const Rational& rhs);
	friend ostream& operator<<(ostream& os, const Rational& r);
};

} /* namespace std */

#endif /* RATIONAL_H_ */
