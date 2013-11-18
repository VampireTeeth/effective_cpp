#include <new>
#include <iostream>
#include <cstdlib>
using namespace std;

void noMoreMemory() {
	cerr << "Unable to allocate more memory" << endl;
	abort();
}

int main() {
	set_new_handler(noMoreMemory);
	int* arr = new int[1000000000000000];
	return 0;
}
