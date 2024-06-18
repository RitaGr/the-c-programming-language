#include <stdio.h> 			/* include information about the standart input/output library */  
	
int main() 				/* define a function named main that receives no argument values */
{ 					/* statements of main are enclosed in braces */
	printf("hello, world\n"); 	/* main calls library function printf to print this sequence of characters; \n represents the newline character */
	return 0;
}

/* The first C program. */

/* If you try something like :
	printf("hello , world
	");
   the C compiler will produce and error message. */

/* printf never supplies a newline automatically*/
