#include <iostream>
using namespace std;


class Address{

public:
	Address(const int str_num,
			const string str_name, const int postcode,
			const string state, const string country);
	virtual ~Address();
	void print(ostream& os) const;
	void strnum(const int str_num) {
		this->str_num = str_num;
	}

private:
	int str_num;
	string str_name;
	int postcode;
	string state;
	string country;
};


class Person{

public:
	Person(const string name, Address& address);
	virtual ~Person();
	Address& addr() const;
	Address* addrP() const;
	void print(ostream& os) const;

private:
	string name;
	Address& address;
};

inline Address::Address(const int str_num,
			const string str_name, const int postcode,
			const string state, const string country):
	str_num(str_num), str_name(str_name), postcode(postcode),
	state(state),country(country){
	cout << "Address constructor called" << endl;
}

inline Address::~Address(){
	cout << "Address destructor called" << endl;
}

inline void Address::print(ostream& os) const {
	os << str_num << ", " << str_name <<
		", " << postcode << ", " << state <<
		", " << country;
}

inline Person::Person(const string name, Address& address):
	name(name),address(address){
	cout << "Person constructor called" << endl;
}

inline Person::~Person(){
	cout << "Person destructor called" << endl;
}

inline Address& Person::addr() const {
	return address;
}

inline Address* Person::addrP() const {
	return &address;
}

inline void Person::print(ostream& os) const {
	os << name << "[";
	address.print(os);
	os << "]";
}

template<typename T>
ostream& operator<<(ostream& os,T& obj){
	obj.print(os);
	return os;
}

int main(int argc, char** argv) {
	Address addr(18, "Gloucester St.", 2216, "NSW", "Australia");
	const Person p("Steven", addr);
	
	cout << p << endl;
	p.addr().strnum(28);
	cout << p << endl;

	p.addrP()->strnum(29);
	cout << p << endl;
	
	return 0;
}





