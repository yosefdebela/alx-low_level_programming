#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - paso
 *
 * Return: int 0;
 */
int main(void)
{
	char str[100];
	int i = 0, randNum = 0, suma = 0;

	srand (time(NULL));


	for (i = 0; suma <= 2644; i++)
	{
		randNum = (rand() % 25) + 65;

		str[i] = randNum;
		suma = suma + randNum;
	}

	str[i++] = 2772 - suma;
	str[i++] = '\0';

	printf("%s\n", str);

	return (0);
}include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}}
