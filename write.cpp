#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st="Amit bhai";

    ofstream out("sam.txt");
    out<<st;

    return 0;
}