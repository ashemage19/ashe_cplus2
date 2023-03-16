#include <iostream>
using namespace std;

void odd (int x);
void even (int x);
void zero (int x);

int main(){
	int i;
	do {
		cout << "Please, enter number: (0 to exit)";
		cin >>i;
		odd (i);
	} while (i!=0);
	return 0;
}
void odd (int x) {
	if ((x%2)!=0)
	cout << "It is odd.\n";
	else if ((x%2)==0)
	even (x);
	else
	zero (x);
}
void even (int x){
	if (x==0)
	zero (x);
	else if ((x%2)==0)
	cout << "It is even. \n";
	else
	odd (x);
}
void zero (int x){
	if (x==0)
	cout << "you entered zero.\n";
	cout << "Good bye!";
}
