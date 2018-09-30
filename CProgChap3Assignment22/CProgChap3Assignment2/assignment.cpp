#include <stdio.h>
#include <stdlib.h>
void function(float cup);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float cup; 

	printf("How much cups now?\n");
	printf("Please enter your cups : ");
	scanf_s("%f", &cup);           
							
	function(cup);
	system("pause");
	return 0;
}

void function(float cup)       /* start of function definition */
	{
	float pint = cup * 2;
	float ounce = cup / 8;
	float tablespoon = cup / (8 * 2);
	float teaspoon = cup / (8 * 2 * 3);

	printf("pint = %f\n", pint);
	printf("cup = %f\n", cup);
	printf("ounce = %f\n", ounce);
	printf("tablespoon = %f\n", tablespoon);
	printf("teaspoon = %f\n", teaspoon);
	}
