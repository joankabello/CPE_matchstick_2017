/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	play_game(char **tab, match_t m, char *total_l, char *total_m)
{
	int	row;
	int	col;
	char	*line = NULL;
	char	*matches = NULL;

	for (; error_input(line) != 0 || line == NULL;) {
		my_putstr("Line: ");
		line = get_next_line(0);
		if (line == NULL)
			return (-1);
	}
	row = my_atoi(line);
	if (error_line(row, total_l) != 0)
		return (play_game(tab, m, total_l, total_m));
	for (; error_input(matches) != 0 || matches == NULL;) {
		my_putstr("Matches: ");
		matches = get_next_line(0);
		if (error_input(matches) != 0)
			return (play_game(tab, m, total_l, total_m));
		else if (matches == NULL)
			return (-1);
	}
	col = my_atoi(matches);
	if (check_rm_match(tab, total_m, row, col) != 0)
		return (play_game(tab, m, total_l, total_m));
	remove_match(tab, row, col, 1);
	return (0);
}

int	my_loop(char **tab, match_t m, char **av)
{
	while (42) {
		my_putstr("\nYour turn:\n");
		if (play_game(tab, m, av[1], av[2]) == -1) {
			return (0);
		}
		else if (count_match(tab, m) == 0) {
			my_putstr("You Lost, too bad...\n");
			return (2);
		}
		my_putstr("\nAI's turn...\n");
		my_robot(tab, av[1], m);
		if (count_match(tab, m) == 0) {
			my_putstr("I lost... snif... but ");
			my_putstr("I'll get you next time!!\n");
			return (1);
		}
	}
	return (0);
}
