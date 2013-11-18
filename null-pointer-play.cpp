#include <iostream>
using namespace std;

namespace std{
	void f(int i) {
		cout << "f(int) called" << endl;
	}

	void f(string* s) {
		cout << "f(string*) called" << endl;
	}

	/**
	void f(int* ip) {
		cout << "f(int) called" << endl;
	}
	**/
	
	void g(long int i) {
		cout << "g(long int) called" << endl;
	}

	void g(string* s) {
		cout << "g(string*) called" << endl;
	}

	const class NullClass {
	public:
		template<typename T>
		operator T*() const {
			return 0;
		}

		template<typename C, typename T>
		operator T C::*() const {
			return 0;
		}

	private:
		void operator &() const;
	} null;
}

int main(int argc, char** argv) {

	f(0);
	f(static_cast<string*>(NULL));

	g(0L);
	g(static_cast<string*>(NULL));

	f(null);
	return 0;
}




