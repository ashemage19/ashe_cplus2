#include <stdio.h>

int main()
{
    int n, t, t1=1, t2=0;
    
     
    printf ("Enter the Number of Terms: ");
    scanf ("%d", &n);
    
    printf ("**************\n");
    
    printf("The Fibonacci Series is: ");
     
    while(n>0)
    {
        
		t=t1+t;
        t1=t2;
        t2=t;
        printf("%d, ",t);
        n--;
    }
return 0;
}
