#include <iostream>
using namespace std;
int Rect (int length, int width);

main (){
	int length, width;
	cout << "pls. enter length and width ";
	cin>>length>>width;
	cout << "the area of rectangle is " <<Rect(length,width);
}
int Rect (int l, int w){
	int a;
	a=l*w;
	return a;
}
