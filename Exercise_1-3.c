#include <stdio.h>

/* Farenheit to Celcius coversion Program with Heading */

int main()
 {
	float fahr, celsius;
	float lower, upper, step;
	printf("\n\n\t\tFarenheit to Celcius coversion\n\n");
	printf("Farenheit\tCelcius\n\n");
	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f \t\t %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
 }

