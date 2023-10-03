#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * strtow takes a string as input and splits it into words, returning an
 * array of strings where each element is a word from the input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL || height == 0)
		{
			free(aout);
			return (NULL);
		}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
				ch_free_grid(aout, i);
				return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aout[i][j] = str[a1];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
