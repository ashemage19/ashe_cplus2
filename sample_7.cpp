//SOLUTION FOR PROBLEM #2:
//display & compute the sum of numbers from 1-10
//using for loop

#include <iostream>
using namespace std;

main () {
	int x=1, sum=0;
	
	for (x=1;x<=10;x++){
		cout<<x<<endl;
		sum=sum+x;
	}
	cout<<"_____\n";
	cout<<sum;
}
