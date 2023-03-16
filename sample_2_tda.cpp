#include <iostream>
#include <conio.h>

main()
{
	int matrix [2] [3];
	//For taking integer inputs in a matrix//
	for (int m1=0; m1<2; m1++)
	{
		for (int m2=0; m2<3; m2++)
		{
			cout<<"Enter Integer :";
			cin>>matrix [m1][m2];
		}
	}
	cout<<endl;
}
