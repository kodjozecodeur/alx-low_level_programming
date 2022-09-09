#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printf if number is positive or not
 *
 * Descriotion: using the main function
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
 /*the code goes here*/
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	 printf("%d is zero\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
