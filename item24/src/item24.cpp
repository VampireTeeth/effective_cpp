//============================================================================
// Name        : item24.cpp
// Author      : Steven Liu
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Natural.h"
using namespace std;


void f(){
	cout << "f() being called" << endl;
}

void f(int i) {
	cout << "f(int) being called" << endl;
}

void g(int i = 0) {
	cout << "g() being called with argument i = " << i << endl;
}

int main(int argc, char** argv) {
	f();
	f(10);
	g();
	g(11);

	cout << "------------------------------------" << endl;
	Natural n1(17);//Nomal constructor being called
	Natural n2(n1);//Copy constructor being called
	Natural n3 = n1;//Copy constructor being called
	return 0;
}
