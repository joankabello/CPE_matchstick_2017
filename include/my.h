/*
** EPITECH PROJECT, 2018
** joan
** File description:
** joan
*/

#ifndef	_MY_H_
#define	_MY_H_

int	check_lines(char **tab, int lines);
int	check_rm_match(char **tab, char *total_m, int r, int c);
int	check_matches(char **tab, int lines, match_t m);
char	*create_map_lines(match_t m);
int	put_matches(char **tab, match_t m);
char	**fill_map(match_t m, int size);
int	play_game(char **tab, match_t m, char *total_l, char *total_m);
int	my_loop(char **tab, match_t m, char **av);
int	error_input(char *str);
int	error_line(int row, char *lines);
int	my_error_arg(int ac, char **av);
int	remove_match(char **tab, int nb_l, int nb_m, int input);
int	count_match(char **tab, match_t m);
int	my_robot(char **tab, char *total_l, match_t m);
int	my_atoi(char *str);
char	*rb_malloc(int size);
char	*rb_realloc_str(char *str, int size);
char	*get_next_line(int fd);
void	my_putchar(char c);
int 	my_putstr(char *str);
int	my_put_nbr(int nb);
int	my_strlen(char *str);
int	my_isnum(char *str);
char	*my_strcpy(char *dest, char *src);
char	**store_data(char **tab, match_t m, int size);
char	*create_map_lines(match_t m);
int	put_matches(char **tab, match_t m);
char	**fill_map(match_t m, int size);
void	display_board(char **tab);
int	my_gameplay();

#endif
