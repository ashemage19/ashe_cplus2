#include <iostream>
using namespace std;

main () {
	printf ("Enter marks of five subjects each out of 100 \n");
	printf ("************** \n");
	float math;
	cout <<"Math: ";
	cin >> math;
	
	float science;
	cout <<"Science: ";
	cin >> science;
	
	float english;
	cout <<"English: ";
	cin >> english;
	
	float history;
	cout <<"History: ";
	cin >> history;
	
	float geography;
	cout <<"Geography: ";
	cin >> geography;
	
	float total;
	float grade;
	total=(math+science+english+history+geography);
	grade=total/5;
	
	printf ("************** \n");
	cout << "Total Marks: " << total << "/500" <<endl;
	cout << "Percentage: " << grade <<endl;
		
	printf ("************** \n");
	if (grade>79)
	cout << "Your Grade: A+" <<endl;
	else if (grade>75&&grade<80)
	cout << "Your Grade: A" <<endl;
	else if (grade>60&&grade<75)
	cout << "Your Grade: B" <<endl;
	else if (grade>45&&grade<60)
	cout << "Your Grade: C" <<endl;
	else if (grade>35&&grade<45)
	cout << "Your Grade: D" <<endl;
	else
	cout <<"invalid input" <<endl;
	
	return 0;
}
	
