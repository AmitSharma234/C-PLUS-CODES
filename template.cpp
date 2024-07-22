#include<iostream>
using namespace std;
template<class T> T add(T a,T b){
    return a+b;
}

int main(){
    int b;
    b= add(6,7);
    cout<<b;
    return 0;
}