#include <iostream>
using namespace std;

main () {
	char firstName [25]; string lastName; int age;
	
	cout <<"pls. enter your name:";
	cin.getline(firstName,1000);
	
	cout << "pls. enter your last name:";
	getline (cin, lastName);
	
	cout << "first name: " << firstName <<endl;
	cout << "last name:" << lastName <<endl;
	return 0;
}
