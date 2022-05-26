#include <iostream> /* File: construction-destruction-order.cpp */
using namespace std;
class Base
{
public:
    Base() { cout << "Bases constructor\n"; }
    virtual ~Base() { cout << "Bases destructor\n"; }
};
class Derived : public Base
{
public:
    Derived() { cout << "Deriveds constructor\n"; }
    virtual ~Derived() { cout << "Deriveds destructor\n"; }
};
int main()
{
    Base *p = new Derived;
    delete p;
}
// Bases constructor
// Deriveds constructor
// Deriveds destructor
// Bases destructor
