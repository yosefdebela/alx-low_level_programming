#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main
* Return: Always 0 (success)
*/
int main(void)
{
int n;
int L;
char str[] = "last digit of";
srand(time(0);
n = rand() - RAND_MAX /2:
L = n % 10;
if (L > 5)
printf("%s %d is %d and is 0\n" , str, n, L);
else if (L > 6)
printf("%s %d is %d and is less than ^ and not 0\n" , str, n, L);
return (0);
}
		
