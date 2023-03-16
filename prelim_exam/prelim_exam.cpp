#include <iostream>
using namespace std;

 main () {
	float charge, surcharge, amount, netamount, unit, suramount;
	int id;
	char name [100];	
		
	cout <<"Enter Customer IDNO: ";
	cin >> id;
	
	cout <<"Enter Customer Name: ";
	cin >> name;
	
	cout <<"Enter Units Consumed: ";
	cin >> unit;
	
	printf ("\n **************************** \n");
	
	if (unit>=100&&unit<=199)
	{
		charge = 1.20;
		surcharge = 0.00;
		amount = unit*charge;
		suramount = surcharge*amount;
		cout <<"Customer IDNO: " <<id<< endl;
		cout <<"Customer Name: " <<name<< endl;
		cout <<"Unit Consumed: " <<unit<< endl;
		cout <<"Amount Charges @Rs. 1.20 per unit: " <<amount<< endl;
		cout <<"Surcharge Amount: " <<suramount<< endl;
		cout <<"Net Amount Paid By the Customer:  " <<amount<< endl;
	}
	else if (unit>=200&&unit<400)
	{
		charge = 1.50;
		surcharge = 0.00;
		amount = unit*charge;
		suramount = surcharge*amount;
		cout <<"Customer IDNO: " <<id<< endl;
		cout <<"Customer Name: " <<name<< endl;
		cout <<"Unit Consumed: " <<unit<< endl;
		cout <<"Amount Charges @Rs. 1.50 per unit: " <<amount<< endl;
		cout <<"Surcharge Amount: " <<suramount<< endl;
		cout <<"Net Amount Paid By the Customer:  " <<amount<< endl;
	}
	
	else if (unit>=400&&unit<600)
	{
		charge = 1.80;
		surcharge = 0.15;
		amount = unit*charge;
		suramount = surcharge*amount;
		netamount = (surcharge*amount)+amount;
		cout <<"Customer IDNO: " <<id<< endl;
		cout <<"Customer Name: " <<name<< endl;
		cout <<"Unit Consumed: " <<unit<< endl;
		cout <<"Amount Charges @Rs. 1.80 per unit: " <<amount<< endl;
		cout <<"Surcharge Amount: " <<suramount<< endl;
		cout <<"Net Amount Paid By the Customer:  " <<netamount<< endl;
	}
	
		else if (unit>=600)
	{
		charge = 2.00;
		surcharge = 0.15;
		amount = unit*charge;
		suramount = surcharge*amount;
		netamount = (surcharge*amount)+amount;
		cout <<"Customer IDNO: " <<id<< endl;
		cout <<"Customer Name: " <<name<< endl;
		cout <<"Unit Consumed: " <<unit<< endl;
		cout <<"Amount Charges @Rs. 2.00 per unit: " <<amount<< endl;
		cout <<"Surcharge Amount: " <<suramount<< endl;
		cout <<"Net Amount Paid By the Customer:  " <<netamount<< endl;
	}
	
	else
	cout <<"invalid input" <<endl;
	
	return 0;
}
