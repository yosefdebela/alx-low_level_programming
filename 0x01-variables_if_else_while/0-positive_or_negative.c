#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
*main -> assign ronadom number to variable
*based a condition
*Return : always 0
*/
int main (void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n" , n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
retutrn (0);
}

