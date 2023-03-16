#include <stdio.h>
int main () {
	int a=10, b=25;
	
	a = b++ + a++;
	b = ++b + ++a;
	printf("a=%d b=%d", a,b);
}

