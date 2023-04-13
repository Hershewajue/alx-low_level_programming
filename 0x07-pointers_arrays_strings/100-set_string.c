#include "main.h"
/**
 * set_string - this sets the value of a pointer to a char
 * @s: a pointer that is to be changed
 * @to: a string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
