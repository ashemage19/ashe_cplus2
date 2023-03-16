#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,spc,rows,k;
    cout << "\n\n displays a pattern like right angle triangle using number which will repeat the number for that row.: \n";
    cout << "-------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<i<<" ";
	cout<<endl;
   }
}
