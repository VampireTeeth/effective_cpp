#include <iostream>

using namespace std;

class Array {
public:
	Array(){
		cout << "Array() called" << endl;
	}
	friend void assign(Array& a1, const Array& a2);

private:
	Array& operator=(const Array& rhs);
	Array(const Array& rhs);
};


void assign(Array& a1, const Array& a2) {
	a1 = a2;
}

int main(int argc, char** argv) {
	Array a1;
//	Array a2 = a1;

	Array a3;
	assign(a3, a1);
	return 0;
}















