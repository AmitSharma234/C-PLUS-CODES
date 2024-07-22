#include<iostream>
using namespace std;
template<class x>
class demo
{
private:
    x num1,x num2;
public:
    demp(x n1,x n2){
     num1=n1;
     num2=n2;
    }
    void cl(){
        if (num1>num2)
        {
            cout<<num1<<"large";
        }
        else
        {
            cout<<num2<<"large";
        }
    }
};
int main()
{  
    demo d1(8,9);
    d1.cl();
    return 0;
}
