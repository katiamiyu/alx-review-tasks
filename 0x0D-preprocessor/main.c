#include "main.h"
#include <stdio.h>
/**
* main - entry point
* Return: always (0)
*/
int main(void)
{
	int i;
	int j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;

	float area = PI * 98 * 98;
	printf("Filename: %s\n", __FILE__);
	printf("Buffer size: %d\n", BUFFER);
	printf("Area with r equal 98 = %.2f\n", area);
	printf("ABS(-98) * 10 = %d, ABS(98) * 10 =  %d\n", i, j);
	printf("SUM 34 and 16 = %d\n", SUM(34, 16));
	return (0);
}
