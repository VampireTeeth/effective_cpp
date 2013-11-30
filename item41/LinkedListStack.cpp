#include <string>
#include "LinkedListStack.h"

namespace std{

template<typename T>
Stack<T>::Stack():top(0){}

template<typename T>
Stack<T>::~Stack(){
    while(top){
        StackNode* toDie = top;
        top = top->next;
        delete toDie;
    }
}

template<typename T>
void Stack<T>::push(const T& obj) {
    StackNode* node = new StackNode(obj, top);
    top = node;
}

template<typename T>
T Stack<T>::pop() throw (EmptyStackException){
    if(top == 0) {
        throw EmptyStackException();
    }
    StackNode* topOfStack = top;
    top = top->next;
    T data = topOfStack->data;
    delete topOfStack;
    return data;
}

template<typename T>
bool Stack<T>::empty() const {
    return top == 0;
}

template class Stack<int>;
template class Stack<double>;
template class Stack<float>;
template class Stack<char>;
template class Stack<string>;
}
