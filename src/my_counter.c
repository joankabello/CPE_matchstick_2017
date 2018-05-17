/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	count_match(char **tab, match_t m)
{
	m.nb_match = 0;
	for (m.r = 0; tab[m.r] != NULL; m.r++)
		for (m.c = 0; tab[m.r][m.c] != '\0'; m.c++)
			if (tab[m.r][m.c] == '|')
				m.nb_match++;
	return (m.nb_match);
}
