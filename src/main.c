/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	main(int ac, char **av)
{
	char	**tab;
	match_t	m;
	int	a;

	if (my_error_arg(ac, av) == -1) {
		write(2, "Bad arguments.\n", 15);
		return (84);
	}
	tab = fill_map(m, my_atoi(av[1]));
	display_board(tab);
	a = my_loop(tab, m, av);
	if (a == 2 || a == 1)
		return (a);
	else
		return (0);
}
