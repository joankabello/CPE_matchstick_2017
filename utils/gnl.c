/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

//#include <library.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*rb_malloc(int size)
{
	char	*ptr;

	if (size <= 0) {
		return (NULL);
	}
	else if ((ptr = malloc(sizeof(*ptr) * size + 1)) == NULL) {
		return (NULL);
	}
	return (ptr);
}

char	*rb_realloc_str(char *str, int size)
{
	char	*ptr;

	if (str == NULL) {
		return (rb_malloc(size));
	}
	else if (size < strlen(str)) {
		return (NULL);
	}
	ptr = rb_malloc(sizeof(*ptr) * size + strlen(str) + 1);
	ptr = strcpy(ptr, str);
	free(str);
	return (ptr);
}

char	*get_next_line(int fd)
{
	char	*line = NULL;
	char	c;
	int	i = 0;
	int	len;

	if (fd == -1)
		return (NULL);
	line = malloc(sizeof(*line) + 2);
	len = read(fd, &c, 1);
	if (len == 0)
		return (NULL);
	while (c != '\n' && c != '\0') {
		line[i] = c;
		len = read(fd, &c, 1);
		line = rb_realloc_str(line, strlen(line) + 1);
		i++;
	}
	line[i] = '\0';
	return (line);
}

int	main(void)
{
	char	*buff = NULL;

	buff = get_next_line(0);
	//my_putstr("Line: ");
	while (buff != NULL) {
		buff = get_next_line(0);
	}
	buff = NULL;
	return (0);
}
