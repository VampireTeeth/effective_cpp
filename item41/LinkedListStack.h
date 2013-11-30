#ifndef HEADER_LINKED_LIST_STACK_H_
#define HEADER_LINKED_LIST_STACK_H_
namespace std{

    class EmptyStackException{
    };

    template<typename T>
    class Stack{
    public:
        Stack();
        virtual ~Stack();
        void push(const T& obj);
        T pop() throw (EmptyStackException);

        bool empty() const;
    private:
        struct StackNode{
            T data;
            StackNode* next;
            StackNode(const T& data, StackNode* next):
                data(data), next(next){}
        };

        StackNode* top;

        Stack(const Stack& rhs);
        Stack& operator=(const Stack& rhs);
    };
}
#endif

