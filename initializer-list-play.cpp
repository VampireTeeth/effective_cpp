#include <iostream>
using namespace std;


template<typename T>
class NamedPtr{
public:
	NamedPtr(const string& initName, T* initPtr);
	const string& getName() const;
	T* const getPtr() const;	
private:
	const string name;
	T* const ptr;
};

template<typename T>
NamedPtr<T>::NamedPtr(const string& initName, T* initPtr):
	name(initName), ptr(initPtr){}

template<typename T>
const string& NamedPtr<T>::getName() const {
	return name;
}

template<typename T>
T* const NamedPtr<T>::getPtr() const {
	return ptr;
}

int main() {
	int i = 15;
	int* ip = &i;
	NamedPtr<int> np("integer-ptr", ip);
	cout << np.getName() << ":" << *(np.getPtr()) << endl;
	return 0;
}
