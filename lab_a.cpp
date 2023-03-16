#include <iostream>
using namespace std;

main () {
	int x=10,sum=0, n;
	
	cout <<"Type the last number: ";
    cin >>n;
    
	while (x>10, x<=n){
		if(x%2==1){
			cout<<x<<endl;
			sum += (x*x);
		}
		x++;
	}
	cout <<"_____\n";
	cout<<sum;
}
