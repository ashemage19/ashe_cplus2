//SOLUTION FOR PROBLEM #4:
//display and compute the sum of even numbers from 1-10
//using for loop

#include <iostream>
using namespace std;

main () {
	int x,sum=0;
	
	for(x=1;x<=5;x++){
		if(x%2==0){
			cout<<x<<endl;
			sum=sum+x;
		}
	}
	cout <<"_____\n";
	cout<<sum;
}
