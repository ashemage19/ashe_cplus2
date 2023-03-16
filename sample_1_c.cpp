#include <iostream>
using namespace std;
//void Area (int r){
float Area (int r){
	float const PI=3.1416;
	float a;
	a = r*r*PI;
	//cout << "the area of circle is: "<<a;
	return a;
}
main (){
	int r;
	cout << "pls. enter radius: ";
	cin>>r;
	cout << "the area of circle given the radius " <<r<<" is " <<Area(r);
	//Area (r);
}
