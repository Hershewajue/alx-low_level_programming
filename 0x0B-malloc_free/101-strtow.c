#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be parsed.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int flag, count, words;
flag = 0;
words = 0;
for (count = 0; str[count] != '\0'; count++)
{
if (str[count] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
words++;
}
}
return (words);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **words_matrix, *tmp_str;
int i, index = 0, len = 0, num_words, count = 0, start_index, end_index;
if (str == NULL || *str == '\0')
return (NULL);
while (*(str + len))
len++;
num_words = count_words(str);
if (num_words == 0)
return (NULL);
words_matrix = (char **)malloc(sizeof(char *) * (num_words + 1));
if (words_matrix == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (count)
{
end_index = i;
tmp_str = (char *)malloc(sizeof(char) * (count + 1));
if (tmp_str == NULL)
return (NULL);
start_index = i - count;
while (start_index < end_index)
*tmp_str++ = str[start_index++];
*tmp_str = '\0';
words_matrix[index] = tmp_str - count;
index++;
count = 0;
}
}
else if (count++ == 0)
start_index = i;
}
words_matrix[index] = NULL;
return (words_matrix);
}
