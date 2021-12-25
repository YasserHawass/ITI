#include <iostream>
using namespace std;

// Lab 9. Example of: Base, Derived, and [calculateSum()] -> [optional]
class Base {
public:
    int a;
};
class Derived : public Base {
public:
    int b;
};

int main(){
    Derived sub;
    sub.b = 3;
    sub.a = 4;
    cout << "Value from derived class: " << sub.b << endl;

    cout << "Value from base class: " << sub.a << endl;
    return 0;
}
