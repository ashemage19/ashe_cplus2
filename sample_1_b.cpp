#include <iostream>
using namespace std;
void Lines();
int Rect (int length, int width);

main () {
	int length, width;
	Lines();
	cout<<endl;
	cout<<"\n pls. enter length and width\n ";
	cin>>length>>width;
	cout << "\n the area of rectangle is " <<Rect(length,width)<<"\n"<<endl;	
}
void Lines (){
	int x;
	for (x=0;x<20;x++){
		cout << "*";
	}
	cout << endl;
}
int Rect(int l, int w){
	int a;
	a=l*w;
	return a;
}
