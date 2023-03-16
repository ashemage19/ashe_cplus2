#include <iostream>
using namespace std;
 
main()
{
    int n,t,t1=1,t2=0;
     
    cout<<"Enter Number: ";
    cin>>n;   
    cout<<"Fibonacci: ";
     
    while(n>=1)
    {
        t=t1+t2;
        t1=t2;
        t2=t;
        cout<<"  \n"<<t;
        n--;
    }
}
