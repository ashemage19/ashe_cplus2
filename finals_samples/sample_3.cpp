#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
	int r;
	r=a-b;
	return r;
}
int main ()
{
	int x=5, y=3, z;
	z= subtraction (7,2);
	cout << "output of first function call: " << z << '\n';
	cout << "output of second function call: " << subtraction (7,2) << '\n';
	cout << "output of third function call: " << subtraction (x,y) << '\n';
	z= 4+ subtraction (x,y);
	cout << "output of forth function call: " << z << '\n';
}
