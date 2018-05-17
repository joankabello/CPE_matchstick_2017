/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

char	*create_map_lines(match_t m)
{
	char	*lines = malloc(sizeof(lines) * (m.length + 2));

	for (m.r = 0; m.r < m.length + 2; m.r++) {
		lines[m.r] = '*';
	}
	return (lines);
}

int	put_matches(char **tab, match_t m)
{
	if (m.c < m.sp || m.c > m.length - m.sp + 1)
		tab[m.r][m.c] = ' ';
	else
		tab[m.r][m.c] = '|';
	return (0);
}

char	**fill_map(match_t m, int size)
{
	char	**tab = NULL;

	m.sp = size;
	m.length = size * 2 - 1;
	tab = store_data(tab, m, size);
	tab[0] = create_map_lines(m);
	for (m.r = 1; m.r != size + 1; m.r++) {
		tab[m.r][0] = '*';
		for (m.c = 1; m.c < m.length + 1; m.c++) {
			put_matches(tab, m);
		}
		tab[m.r][m.c] = '*';
		m.sp--;
	}
	tab[m.r] = tab[0];
	return (tab);
}

void	display_board(char **tab)
{
	int	row;

	for (row = 0; tab[row] != NULL; row++) {
		my_putstr(tab[row]);
		write(1, "\n", 1);
	}
}
