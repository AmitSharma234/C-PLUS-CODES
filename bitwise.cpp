// CPP Program to demonstrate the Bitwise Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 6, b = 4;
  // Binary AND o
	cout << "a & b is " << (a & b) << endl;
  // Binary OR 
	cout << "a | b is " << (a | b) << endl;
  // Binary XOR 
	cout << "a ^ b is " << (a ^ b) << endl;
  // Left Shift 
	cout << "a<<1 is " << (a << 1) << endl;
  //Right Shift 
	cout << "a>>1 is " << (a >> 1) << endl;
  // One’s Complementoperator
	cout << "~(a) is " << ~(a) << endl;

	return 0;
}
