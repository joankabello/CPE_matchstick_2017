/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	check_lines(char **tab, int lines)
{
	int	r = 0;
	int	c = 0;

	while (tab[lines][c] != '\0') {
		if (tab[lines][c] == '|')
			r++;
		c++;
	}
	return (r);
}

int	check_rm_match(char **tab, char *total_m, int r, int c)
{
	if (c > my_atoi(total_m)) {
		my_putstr("Error: you cannot remove more than ");
		my_putstr(total_m);
		my_putstr(" matches per turn\n");
		return (-1);
	}
	else if (c == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (-1);
	}
	if (c > check_lines(tab, r)) {
		my_putstr("Error: not enough matches on this line\n");
		return (-1);
	}
	return (0);
}

int	check_matches(char **tab, int lines, match_t m)
{
	m.r = 0;
	for (m.r = 0; tab && tab[lines] && tab[lines][m.r]; m.r++) {
		if (tab[lines][m.r] == '|')
			return (1);
	}
	return (0);
}
