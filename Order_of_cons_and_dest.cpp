#include <iostream> /* File: construction-destruction-order.cpp */
using namespace std;
class Base
{
public:
    Base() { cout << "Bases constructor\n"; }
    ~Base() { cout << "Bases destructor\n"; }
};
class Derived : public Base
{
public:
    Derived() { cout << "Deriveds constructor\n"; }
    ~Derived() { cout << "Deriveds destructor\n"; }
};
int main()
{
    Base *p = new Derived;
    delete p;
}

#Bases constructor
Deriveds constructor
Bases destructor
