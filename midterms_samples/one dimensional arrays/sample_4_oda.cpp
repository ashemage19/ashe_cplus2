#include <iostream>
using namespace std;

main () {
	int num [7]; //array declaration
	
	cout << "pls. enter 7 numbers: \n";
	
	for (int x=0; x<7; x++) {
		cin >> num[x];
	}
	
	cout << "==========\n ";
	for (int x=0;x<7;x++){
		cout << num[x]<<endl;
	}
}
