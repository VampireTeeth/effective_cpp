

#include <iostream>

using namespace std;

class B;

class A{
public:
	A(){
		cout << "A() called" << endl;
	}

	A(const B&){
		cout << "A(const B&) called" << endl;
	}

};

class B{
public:
	operator A() const {
		cout << "operator A() called on B" << endl;
	}
};


void f(const A&) {
	cout << "f(const A&) called" << endl;
}


class Base1{
public:
	void doIt(){
		cout << "Base1::doIt() called" << endl;
	}
};

class Base2{
public:
	int doIt() {
		cout << "Base2::doIt() called" << endl;
		return 1;
	}
};

class Derived : public Base1, public Base2{
	
};

int main(int argc, char** argv) {
	B b;
	Derived d;
	f(b);
	d.Base1::doIt();
	int i = d.Base2::doIt();
	return 0;
}

