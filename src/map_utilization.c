/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

char	**store_data(char **tab, match_t m, int size)
{
	m.r = 0;
	tab = malloc(sizeof(*tab) * 100);
	while (m.r < size + 1) {
		tab[m.r] = malloc(sizeof(tab) * m.length + 1);
		m.r++;
	}
	return (tab);
}

void	my_status(char **tab, int nb_l, int nb_m)
{
		my_putstr("Player removed ");
		my_put_nbr(nb_m);
		my_putstr(" match(es) from line ");
		my_put_nbr(nb_l);
		my_putchar('\n');
		display_board(tab);
}

void	get_robot_status(char **tab, int nb_l, int nb_m)
{
		my_putstr("AI removed ");
		my_put_nbr(nb_m);
		my_putstr(" match(es) from line ");
		my_put_nbr(nb_l);
		my_putchar('\n');
		display_board(tab);
}

int	remove_match(char **tab, int nb_l, int nb_m, int input)
{
	int	col = my_strlen(tab[nb_l]);
	int	rm;

	for (rm = 0; rm < nb_m;) {
		if (tab[nb_l][col] == '|') {
			rm++;
			tab[nb_l][col] = ' ';
		}
		col--;
	}
	if (input == 1) {
		my_status(tab, nb_l, nb_m);
	}
	else if (input == 2) {
		get_robot_status(tab, nb_l, nb_m);
	}
	return (0);
}
