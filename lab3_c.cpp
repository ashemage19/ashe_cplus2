#include <iostream>
using namespace std;

int main () {
	char name [25];
	cout <<"Enter your name: ";
	cin >> name;
	
	char gender; cout <<"Enter your gender: ";
	cin >> gender;
	
	switch(gender) {
		case 'F': case 'f':
			cout <<"Hi! " <<name<< ". You are female. \n";break;
		case 'M': case 'm':
			cout <<"Hi! " <<name<< ". You are male. \n";break;
		default:
			cout << "Invalid \n";break;
	}

	return 0;
}
