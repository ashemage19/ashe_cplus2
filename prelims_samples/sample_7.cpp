#include <stdio.h>
#define PI 3.1416

main (){
	double area;
	int ra;
	
	printf ("pls. enter value for radius: ");
	scanf ("%d", &ra);
	
	area = PI * ra * ra;
	
	printf("the area of circle given the radius %d is %.2f", ra,area);
	
	return 0; 
}
