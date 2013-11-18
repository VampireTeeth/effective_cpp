
/**
  Demostration of problems that are involved by overloading
  functions taking the pointers and numeric values as arguments
 **/

#include <iostream>
using namespace std;

//#define NULL 0L

void f(int i) {
	cout << "f(int) called" << endl;
}
void f(string* s){
	cout << "f(string*) called" << endl;
}

void g(long int i){
	cout << "g(long int) called" << endl;
}
void g(string* s) {
	cout << "g(string *) called" << endl;
}
	
const class NullClass{

public:
	template<typename T>
	operator T*()const {//null pointer for any object of type T
		return 0;
	}
	
	template<typename C, typename T>
	operator T C::*() const {//null pointer for member of T in class C
		return 0;
	}
	
private:
	void operator&() const;	
} null;


int main(int argc, char** argv) {
	f(0);//ok 0 is of int and can be directly passed to f(int) without implicit cast
	f(static_cast<string*>(0));
//	f(NULL);//error ambiguous function call -- NULL can be implicitly casted to both string* and int
//	g(0); //error ambiguous function call -- 0 can be implicitly casted to both string* and long int
	g(NULL); // ok NULL is of long int and can be directly passed to g(long int) without implicit cast
	g(static_cast<string*>(NULL));

	f(null);
	f(0);
	g(null);
	g(0L);
	return 0;
}




