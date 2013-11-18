#include <iostream>
#include <cstring>
using namespace std;

class String{
public:
	String(const char* );
	void print() const;
	~String();
private:
	char* data;
};

String::String(const char * value) {
	if(value){
		data = new char[strlen(value)+1];
		strcpy(data, value);
	}else{
		data = new char[1];
		data[0] = '\0';
	}
}

void String::print() const {
	cout << "Content of string: " << data << endl;
}

inline String::~String() {
	delete[] data;
}

int main() {
	String a("Hello");
	String b("World");
	a.print();
	b.print();
	a = b;
	a.print();
	b.print();
}












