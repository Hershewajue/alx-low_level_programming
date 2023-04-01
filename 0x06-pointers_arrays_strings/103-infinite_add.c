#include <stdio.h>
/**
* infinite_add - Adds two numbers stored as strings
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The size of the buffer
* Return: If the result can be stored in r, return a pointer to r.
* Otherwise, return 0.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
while (*(n1 + len1))
len1++;
while (*(n2 + len2))
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
*(r + size_r - 1) = '\0';
size_r--;
len1--;
len2--;
while (len1 >= 0 || len2 >= 0 || carry)
{
sum = carry;
if (len1 >= 0)
sum += *(n1 + len1--) - '0';
if (len2 >= 0)
sum += *(n2 + len2--) - '0';
carry = sum / 10;
*(r + --size_r) = (sum % 10) + '0';
}
if (*r == '\0')
return (0);
return (r + size_r);
}
