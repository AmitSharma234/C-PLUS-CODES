#include<iostream>
using namespace std;
class a
{
    int c;
    int b;
    public:
        a(int,int);
       void get();
};

a::a(int x,int y=10)
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
    a c(8);

    b.get();
    cout<<endl;
    c.get();
    return 0;

}