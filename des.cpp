#include<iostream>
using namespace std;
class t{
    public:
    t(){
        cout<<"constructor";
    }
    ~t(){
        cout<<"distructor";
    }
};
int main()
{
  t t1;
}