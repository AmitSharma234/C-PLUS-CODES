#include<iostream>
using namespace std;
class p{
    int *p;
    public:
    void print();
r()
{
    p=new int;
    *p=10;
}
};
void p::print(){
    cout<<*p;
}

int main()
{
    p p1;
    p1.print();
    return 0;
}