#include "main.h"

/**
 * cap_string - capitalizeing function
 * Description: a function that capitalize
 * all first letters of all words in a string
 * @str: string passed to the function
 * Return: return a string with first letters capital
 */
char *cap_string(char *str)
{
	int i = 0, j = 11;
	char a[] = {'.', ',', ';', ' ', '!', 9, 10, '?', '"', '(', ')', '{', '}'};

	if (*(str + i) >= 97 && *(str + i) <= 122)
	{
		*(str + i) = *(str + i) - 32;
	}
	while (*(str + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((a[j] == *(str + i)) &&
					 (*(str + i + 1) >= 97) && (*(str + i + 1) <= 122))
			{
				*(str + i + 1) = *(str + i + 1) - 32;
			}
		}
		i++;
	}
	return (str);
}

