#ifndef EBDER_GOOD_DESIGN_H_
#define HEBDER_GOOD_DESIGN_H_

namespace std{


    class Dep1;

    class B{

    public:
        B(Dep1&);
        virtual ~B();
        Dep1& dep1() const;
        void dep1(Dep1&);
    private:
        Dep1& _dep1;

    };
}
#endif
