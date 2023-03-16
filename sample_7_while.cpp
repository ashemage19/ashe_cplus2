//SOLUTION FOR PROBLEM #2:
//display & compute the sum of numbers from 1-10
//using while loop

#include <iostream>
using namespace std;

main () {
	int x=1, sum=0;
	
	while (x<=10){
		cout<<x<<endl;
		sum=sum+x;
		x++;
	}
	cout<<"_____\n";
	cout<<sum;
}
