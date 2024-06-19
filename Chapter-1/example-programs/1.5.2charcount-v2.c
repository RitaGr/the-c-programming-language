#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
	double nc;
	for(nc = 0; getchar() != EOF; ++nc)
		; /* a null statement */
	printf("%.0f\n", nc);
	return 0;
}

/* useful info :
	printf uses %f for both float and double;
	%.0f suppresses printing of the decimal point and the fraction point,
	which is 0;
*/
