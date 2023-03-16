#include <iostream>
using namespace std;

main () {
	int const MAX = 10;
	int aInt[MAX];
	int i, nLarge;
	
	printf ("pls. enter 10 numbers: \n");
	
	for (i=0;i<10;i++) {
		cin>>aInt[i];
	}
	nLarge = aInt[0];
	for (i=0;i<=MAX-1; i++){
		if (aInt[i] > nLarge)
		nLarge = aInt[i];
	}
	cout <<"Largest value is " << nLarge;
}
