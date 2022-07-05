#include "main.h"
#include <unistd.h>
/*
 * _isalpha - checks for alphabetical letters
 * Description - function used for ordering
 * @c: character to be checked
 * return:  0 or 1 based on the outcome value
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
