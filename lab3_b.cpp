#include <iostream>
using namespace std;

int main () {
	int year; cout <<"Enter a year level: ";
	cin >> year;
	
	
	switch(year) {
		case 1: cout <<"Freshman";break;
		case 2: cout <<"Sophomore";break;
		case 3: cout <<"Junior";break;
		case 4: cout <<"Senior";break;
		default: cout <<"Invalid";
	}

	return 0;
}
