#include <iostream>
#include <cstring>
using namespace std;

class String{
public:
	String(const char* );
	void print() const;
	~String();
private:
	String(const String&);
	void operator=(const String&);
	char* data;
};

String::String(const char * value) {
	if(value){
		data = new char[strlen(value)+1];
		strcpy(data, value);
	}else{
		data = new char[1];
		data[strlen(data)-1] = '\0';
	}

}

void String::print() const {
	cout << "Content of string: " << data << endl;
}

inline String::~String() {
	cout << "String destructor called" << endl;
	delete[] data;
}

int main(int argc, char** argv) {
	const char hello[] = "Hello";
	const char world[] = "World";
	String a(hello);
	String b(world);
	a.print();
	b.print();
//	a = b; // Error int operator=(const string&) is private
	a.print();
	b.print();
	return 0;
}












