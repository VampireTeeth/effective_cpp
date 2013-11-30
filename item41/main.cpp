#include <iostream>
#include "LinkedListStack.h"

int main(int argc, char **argv) {
    std::Stack<std::string> istack;
    istack.push("Hello");
    istack.push("World");
    try{
        std::cout << istack.pop() << std::endl;
        std::cout << istack.pop() << std::endl;
        std::cout << istack.pop() << std::endl;
    }catch(std::EmptyStackException e){
        std::cerr << "The stack is empty" << std::endl;
    }
	return 0;
}
