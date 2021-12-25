#include <iostream>
using namespace std;

class A {
    public:
        virtual void method() {}
};

class B : public A {
    private:
        void method() {}
};

int main(void) {
    A* obj = new B();
    obj->method(); // B::method is invoked, despite it being private
}

