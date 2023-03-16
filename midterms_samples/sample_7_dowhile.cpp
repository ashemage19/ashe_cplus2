//SOLUTION FOR PROBLEM #2:
//display & compute the sum of numbers from 1-10
//using do while loop

#include <iostream>
using namespace std;

main () {
	int x=1, sum=0;
	
	do {
		cout<<x<<endl;
		sum=sum+x;
		x++;
	}
	while (x<=10);
}
