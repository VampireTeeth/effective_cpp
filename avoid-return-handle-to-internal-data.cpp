#include <iostream>
#include <cstring>
using namespace std;



class String {
public:
	String(char* data):data(data){
		cout << "String(const char*) called" << endl;
	}
	
	virtual ~String() {
		cout << "~String() called" << endl;
		data = 0;
	}
	
	operator const char*() const {
		cout << "operator const char*() called" << endl;
		return data;
	}

	const char& operator[](int index) const {
		return data[index];
	}

	void print() const {
		cout << data << endl;
	}
	
private:
	char* data;
	operator char*() const;
};

int main(int argc, char** argv){
	char c[] = "Hello, world!";
	const String s(c);
	const char* cp = s;

	s.print();
	//strcpy(cp, "Hello, Mom!");//Error, invalid conversion from const char* to char*
	 //cout << s << endl;
//	s[1] = 'E';//Error, assignment to read-only location
//	s.print();
	return 0;
}

