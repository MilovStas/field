#include <iostream>
#include <string.h>
using namespace std;

//  N!=N*(N-1)!		! -factorial

/*int f(int a)
{
	int res=a;					//res=a;  int i=a-1;
	for(int i=a-1;i>1;i--)
	{
		res*=i;
	}
	return res;
}*/
int f(int a)	//three 333
{
	// int r=a;
	
	if(a==0||a==1)//some change 11
	{
	return 1;		//new change
	}

	return a*f(a-1);		//recurcive
}

/*int OutNambers(int a)
{
	if (a < 1) return 0;	//cout numbers
	cout << a << endl;
	--a;
	OutNambers(a);

}*/

int main()
{
	
	// cout<<
	cout<<f(5);
}

/*int f(int x)
{
	int r=1;					int r=1; int i=x;
	for(int i=x;i>1;i--)
	{
		r*=i;
	}
	cout<<r;

	return 0;
}*/