#include <iostream>
using namespace std;


namespace ns1{
	const double PI = 3.14;
}

namespace ns2{
	const double PI = 3.1415;
}

namespace ns3 {
	const double PI = 3.14159;
}


int main(int argc, char** argv) {
	cout << "PI in ns1 = "  << ns1::PI << endl;
	cout << "PI in ns2 = "  << ns2::PI << endl;
	cout << "PI in ns3 = "  << ns3::PI << endl;
	return 0;
}


















