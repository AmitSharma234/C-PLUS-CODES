#include<iostream>
using namespace std;
class a
{
    int x;
public:
    a(int);
    ~a(void);
    get();
};

a::a(int z)
{
    x=z;
    cout<<"constructor called"<<endl;
}

a::~a()
{
    cout<<"destructr called"<<endl;
}
a::get()
{
    return x;
}
int main()
{
    a a1(5);
    cout<<a1.get()<<endl;
    a a2(7);
    cout<<a2.get()<<endl;

    return 0;
}

