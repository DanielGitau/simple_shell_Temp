#include "main.h"
/**
 * _atoi_ - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi_(char *s)
{
	unsigned int counter = 0, size = 0, oin = 0, pn = 1, m = 1, i;
	
	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;
		if (*(s + counter) == '-')
			pn *= -1;
		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		counter++;
	}
	for (i = counter - size; i < counter; i++)
	{
		oin = oin + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oin * pn);
}
/**
 * _strcmp - Function that compares two strings.
 * @s1: type str compared
 * @s2: type str compared
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}

/**
 * _strncmp - Function to compare two strings up
 * to a specified number of characters
 *
 * @str1: The first string to be compared
 * @str2: The second string to be compared
 * @n: The maximum number of characters to compare
 * Return:
 *   - A negative value if str1 is less than str2
 *   - 0 if str1 is equal to str2
 *   - A positive value if str1 is greater than str2
 */
int _strncmp(char *str1, char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
