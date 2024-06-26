/* Exercise 1-15 : Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>
#define UPPER_LIMIT 300

float conversion(float fahr);

int main()
{
	float step;
	for(step = 0; step <= UPPER_LIMIT; step = step + 20.0)
		printf("%3.0f %6.1f\n", step, conversion(step));
	return 0;
}

float conversion(float fahr)
{
	return (5.0/9.0) * (fahr - 32.0);
}
