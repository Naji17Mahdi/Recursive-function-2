#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int sum ( int );
main()
{
	int a = 100 ;
	
	cout<<sum ( a );
}

int sum ( int n )
{
	if ( n == 0 || n == 1 )
	{
		return n;
	}
	else
	{
		return n + sum ( n - 1 );
	}
}
