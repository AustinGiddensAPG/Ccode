// ******* squarefunction.c ******* 
#include<studio.h>
int square ( int v );

int main ( )
{
	int x, n ;
	printf ( "\nEnter some number for finding square \n");
	scanf ( "%d", &n) ;
	x = square ( n ) ;
	printf ( "\nSquare of the given number %d id %d",n,x );
	printf("\n\n");
	return 0;
}

int square ( int v )  // function definition
{
	int p;
	p = v * v ;
	return ( p ) ;
}
