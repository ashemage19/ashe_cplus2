#include <stdio.h>
int main () {
	int a=10, b=25;
	printf("a = %d b = %d \n", a,b);
	a= b++;
	printf ("a = %d \n", a);
	printf ("a = %d \n", b);
	printf ("a = %d b = %d \n", a,b);
	a = b++ + a++;
	printf("b = %d \n", b);
	printf("a = %d b = %d \n", a,b);
	b = ++b + ++a;
	printf("a = %d  b= %d", a,b);
	
	return 0;
}
