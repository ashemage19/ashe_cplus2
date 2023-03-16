//SOLUTION FOR PROBLEM #4:
//display and compute the sum of even numbers from 1-10
//using while loop

#include <iostream>
using namespace std;

main () {
	int x,sum=0;
	
	while (x<=5){
		if(x%2==0){
			cout<<x<<endl;
			sum=sum+x;
		}
		x++;
	}
	cout <<"_____\n";
	cout<<sum;
}
