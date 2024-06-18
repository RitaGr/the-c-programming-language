/* Exercise 1-1 : Run the "hello, world" program on your system. Experiment
   With leaving out parts of the program, to see what error messages you get.*/

/* experiment-1 - leaving out ;

#include <stdio.h>
int main()
{
	printf("hello, world\n");
	return 0
}

Error message : 
----------------
exercise1-1.c:11:1: error: expected ‘;’ before ‘}’ token
 } 
*/

/* experiment-2 - wrong spell of printf 
#include <stdio.h>
int main()
{
	pritf("hello, world\n");
	return 0;
}

Error message : 
----------------
exercise1-1.c:(.text+0x1a): undefined reference to `pritf' */

/* experiment-3 
#include <stdio.h>
int main()
{
	pritf("hello, world\n
	");
	return 0;
}
Error message : 
exercise1-1.c:37:2: error: missing terminating " character
  pritf("hello, world\n
  ^
*/


