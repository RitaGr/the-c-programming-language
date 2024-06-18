/* Exercise 1-4 : Write a program to print the corresponding 
   Celsius to Fahrenheit table.*/
#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	fahrenheit = lower;

	while (fahrenheit <= upper)
	{
		celsius = (5.0/9.0) * (fahrenheit - 32.0);
		printf("%6.1f %6.0f\n", celsius, fahrenheit);
		fahrenheit = fahrenheit + step;
	}
}
