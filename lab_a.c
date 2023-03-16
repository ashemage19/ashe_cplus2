#include <stdio.h>
int main ()
{
	int n=2, sum=0, square;
	
	printf("Enter a number >=10: ");
	scanf("%d", &n);
	
	printf("The square of odd numbers from 10 to %d is: \n", n);
	
	while (n>=10)
	{
		if (n%2==1)
		{
			printf("%d = ",n);
			sum=sum+(n*n);
			square=n*n;
			printf("%d ",square);
			printf("\n");	
		}	
		n--;
	}
	printf ("**************\n");
	printf("The sum the odd numbers is: %d", sum );
}
