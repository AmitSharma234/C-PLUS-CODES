#include<iostream>
using namespace std;
class  code
{
  int id;
public:
     code(int a)
     {
     id=a;
     }
    void display()
    {
     cout<<id<<endl;
    }
};
int main()
{
    code obj1(10);
    obj1.display();
    code obj2(obj1);
    obj2.display();

    return 0;
}