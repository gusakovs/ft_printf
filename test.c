#include <stdio.h>  
#include <stdlib.h>  
	
// define the static function  
int mySqr( int num)  
{  
	return num * num;   
}  
	
int main()  
{  
	int n1, res;  
	printf (" Enter an integer number: ");  
	scanf ("%d", &n1);  
	res = mySqr(n1); // call static function  
	printf(" The square of the %d is %d.", n1, res);  
	return 0;  
}  