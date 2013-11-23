#ifndef HEADER_DEP1_H_
#define HEADER_DEP1_H_

namespace std{
    class Dep1 {
    
    public:
        Dep1(int);
        virtual ~Dep1();

        virtual int value() const;
        virtual double doubleValue() const;
    private:
        int _value;
    };
}
#endif
