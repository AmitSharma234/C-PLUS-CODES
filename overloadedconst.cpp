#include<iostream>
using namespace std;
class a
{
    int c;
    int b;
    public:
        a(int);
        a(int,int);
       void get();
};
a::a(int x)
{
    c=x;
}

a::a(int x,int y)
{
    c=x;
    b=y;
}
void  a::get()
        {
            cout<<" x="<<c<<endl<<"y="<<b<<endl;
        }
int main()
{
    a b(9,8);
    b.get();
    return 0;

}