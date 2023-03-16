#include <iostream>
using namespace std;

main () {
	char name [25];
	cout <<"Enter your name:";
	cin >> name;
	
	float age;
	cout <<"Enter your age: ";
	cin >> age;
	
	printf ("************** \n");
	
	if(age >=18)
	cout <<"Hi " <<name<< "! you can now vote" <<endl;
	
	else if(age <=17)
	cout <<"Sorry " <<name<< ", you cannot vote yet" <<endl;
	

}
