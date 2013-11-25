#include <iostream>
#include "Shapes.h"

int main(int argc, char **argv)
{
	std::cout << "hello world" << std::endl;

    std::Shape* ps;
    std::Shape* prect = new std::Rectangle();
    std::Shape* psqr = new std::Square();

    prect->draw();
    psqr->draw();

    ps = prect;
    ps->draw();

    ps = psqr;
    ps->draw();

    ps = NULL;

    delete psqr;
    delete prect;
    delete ps;
	return 0;
}
