#include <stdio.h>

int power(int m, int n); /* function prototype */

/* test power function */

int main()
{
	int i;
	
	for(i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3, i));
	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
	int i, p;
	
	p = 1;
	for(i = 1; i <= n; ++i)
		p = p * base;
	return p;
}


/*
	useful info : 
	Since main is a function like any other, it may return a value to its caller, which is in effect the environment in which the program was executed.
	Typically, a return value of zero implies normal termination; non-zero values signal unusual or erroneous termination conditions.

	The declaration 'int power(int m, int n);' just before main says that power is a function that expects two int arguments and returns an int. 
	This is called function prototype and it must agree with the definition and uses of power. Parameter names need not agree.


*/
