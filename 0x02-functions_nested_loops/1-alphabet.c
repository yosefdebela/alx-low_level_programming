#include <unistd.h>
#include "main.h"
/*
* print_alphabet - check alphabet
* Description: It prints the alphabet in lowercase followed by a new line
* Return: Always 0
 */
void print_alphabet(void)
{
char j;
for (j = 'a' ; j <= 'z' ; j++)
_putchar(j);
_putchar('\n');
}
