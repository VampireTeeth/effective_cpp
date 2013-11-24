#include <iostream>
#include "Rectangle.h"


void makeBigger(std::Rectangle& r) {
    r.width(r.width() + 10);
}

std::ostream& operator<<(std::ostream& os, const std::Rectangle& r) {
    os << "Rectangle: height=" << r.height() 
        << ",width=" << r.width();
    return os;
}

int main(int argc, char **argv)
{
	std::cout << "hello world" << std::endl;
    std::Rectangle r(3, 2);
    std::cout << r << std::endl;
    makeBigger(r);
    std::cout << r << std::endl;
	return 0;
}
