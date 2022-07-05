#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Check Holberton
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int n)
{
	int x;

	if  (n < 0)
	n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
