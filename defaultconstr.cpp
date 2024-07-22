#include<iostream>
using namespace std;
class a
{
    int x;
    public:
        a();
        void print()
        {
            cout<<"the value of a is :"<<x<<endl;
        }
};
a::a()
{
    x=10;
}
int main()
{
    a a1;
    a1.print();
    return 0;

}