/*
 * Natural.hpp
 *
 *  Created on: Nov 11, 2013
 *      Author: weikeliu
 */

#ifndef NATURAL_HPP_
#define NATURAL_HPP_

#include <string>
using namespace std;

class Natural {
public:
	Natural(int initValue);
	Natural(const Natural& rhs);

private:
	unsigned int value;

	void error(const string& );
	void init(unsigned int );

};


#endif /* NATURAL_HPP_ */
