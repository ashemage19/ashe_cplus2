#include <iostream>
int main (){
	using namespace std;
	int sum = 0, i, n;
	
	for(i= 0; i<10; i++){
		cout << "Enter number" << endl;
		cin >> n;
		sum = sum + n;
	}
	cout << "Sum is " << sum << endl;
	return 0;
}
