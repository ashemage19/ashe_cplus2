#include <iostream>
using namespace std;

main () {
	float grade;
	cout <<"enter grade: ";
	cin>> grade;
	
	if (grade>=1&&grade<50)
	cout << "failed" <<endl;
	else if (grade>=50&&grade<=60)
	cout << "passed" <<endl;
	else if (grade>=61&&grade<=70)
	cout << "fair" <<endl;
	else if (grade>=71&&grade<=80)
	cout << "good" <<endl;
	else if (grade>=81&&grade<=90)
	cout << "very good" <<endl;
	else if (grade>=91&&grade<=100)
	cout << "excellent" <<endl;
	else
	cout <<"invalid input" <<endl;
	cout<<"the grade you entered is: " <<grade;
}
