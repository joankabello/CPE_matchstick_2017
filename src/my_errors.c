/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	error_input(char *str)
{
	int	a;

	for (a = 0; str != NULL && str[a] != '\0'; a++) {
		if (str[a] < '0' || str[a] > '9') {
			my_putstr("Error: invalid input ");
			my_putstr("(positive number expected)\n");
			return (-1);
		}
	}
	return (0);
}

int	error_line(int row, char *lines)
{
	if (row > my_atoi(lines) || row <= 0) {
		my_putstr("Error: this line is out of range\n");
		return (-1);
	}
	return (0);
}

int	my_error_arg(int ac, char **av)
{
	if (ac != 3) {
		return (-1);
	}
	else if (my_isnum(av[1]) == -1 || my_isnum(av[2]) == -1) {
		return (-1);
	}
	if (my_atoi(av[1]) <= 1 || my_atoi(av[1]) >= 100) {
		return (-1);
	}
	else if (my_atoi(av[2]) <= 0) {
		return (-1);
	}
	return (0);
}
