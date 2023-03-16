#include <iostream>]
using namespace std;

main (){
	int num [10];//array declaration
	int large
	
	 = 0;
	
	cout << "pls. enter 10 numbers:\n";
	
	for (int x=0;x<10;x++){
		cin >> num[x];
	}
	large = num[0];
	cout<< "==========\n";
	for (int x=0;x<10;x++){
		if (num[x]>large) //condition to determine larger number
		large = num[x];
	}
	//display the largest number
	cout << "largest number is: " << large;
}
