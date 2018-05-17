/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int 	my_putstr(char *str)
{
	int	i = 0;

	if (str == NULL)
		return (84);
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}

int	my_put_nbr(int nb)
{
	int i;

	i = 0;
	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb >= 10) {
		i = (nb % 10);
		nb = (nb - i) / 10;
		my_put_nbr(nb);
		my_putchar(48 + i);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}

int	my_strlen(char *str)
{
	int	i = 0;

	if (str == NULL)
		return (84);
	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
