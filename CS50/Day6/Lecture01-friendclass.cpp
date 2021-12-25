#include <iostream>
// a LinkedList class may be allowed to access private members of Node.
class Node {
    private:
        int key;
        Node* next;
        /* Other members of Node Class */

        // Now class  LinkedList can
        // access private members of Node
        friend class LinkedList;
};

class A {
    private:
        int a;

    public:
        A() { a = 5; }
        friend class B;
};
class B {
    private:
        int b;

    public:
        void showA(A& x)
        {
            // Since B is friend of A, it can access
            // private members of A, but gotta pass the other class, like we doing in friend functions
            std::cout << "A::a=" << x.a;
        }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}
