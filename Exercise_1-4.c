#include <stdio.h>

/* Farenheit to Celcius coversion Program with Heading */

int main()
{
	int farenheit;
	float celcius;
	printf("\n\n\t\tFarenheit to Celcius coversion\n\n");
	printf("\t\t  Farenheit\tCelcius\n\n");
	for (int i = 0; i <= 100; i += 20)
	{
		farenheit = i;
		celcius = (farenheit - 32.0) * 5.0/9.0;
		printf("\t\t\t%3d \t %6f\n", farenheit, celcius);
	}
		
}
