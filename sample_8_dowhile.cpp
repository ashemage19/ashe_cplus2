//SOLUTION FOR PROBLEM #3:
//display even numbers from 1-10
//using do while loop

#include <iostream>
using namespace std;

main () {
	int x,sum=0;
	
	do{
		if(x%2==0){
			cout<<x<<endl;
		}
		x++;
	}
	while(x<=5);
}
