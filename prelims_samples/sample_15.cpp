#include <iostream>
using namespace std;

int main (){
	int number;
	string a;
	
	cout <<"enter a number";
	cin >>number;
	/*if (a == 0)
	cout <<"even";
	else
	cout <<"odd";*/
	a= (number % 2==0)? "even":"odd";
	cout <<a;
}
