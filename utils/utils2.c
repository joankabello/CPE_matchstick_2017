/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#include <library.h>

int	my_isnum(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (-1);
	}
	return (1);
}

char	*my_strcpy(char *dest, char *src)
{
	int	i;

	if (src == NULL) {
		return (NULL);
	}
	else if (dest == NULL) {
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++) {
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

int	my_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	if (str == NULL) {
		return (84);
	}
	else if (str[0] == '-') {
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++) {
		res = res * 10 + str[i] - '0';
	}
	return (res * sign);
}
