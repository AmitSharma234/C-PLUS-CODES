#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;    //obj
    out.open("sam.txt");   //opening a file
    out<<"this is me";  //write
    out.close();   //closing a file
    return 0;
}
