#include <iostream>
using namespace std;
int main ()
{
	int test [3] [2] =
	{
		{2, -5},
		{4, 0},
		{9, 1},
	};
	//Accessing two dimensional array using
	//nested for loops
	for(int i=0;int<3;++i)
	{
		for(int j=0;j<2;++j)
		{
			cout<< "test[" << i <<"] [" << j << "] -" <<test [i] [j] <<endl;
		}
	}
	return 0;
}
