//============================================================================
// Name        : item24.cpp
// Author      : Steven Liu
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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
	return 0;
}
