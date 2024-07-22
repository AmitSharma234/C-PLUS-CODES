// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }
};

class derived : public base {
public:
	void print() { cout << "print derived class\n"; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;
	bptr->print();
	bptr->show();
	return 0;
}
