/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	my_robot(char **tab, char *total_l, match_t m)
{
	m.r = random() % my_atoi(total_l) + 1;
	for (; check_matches(tab, m.r, m) == 0;) {
		m.r = random() % my_atoi(total_l) + 1;
	}
	m.nb_match = random() % check_lines(tab, m.r) + 1;
	remove_match(tab, m.r, m.nb_match, 2);
	return (0);
}
