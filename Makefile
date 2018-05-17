##
## EPITECH PROJECT, 2018
## joan
## File description:
## joan
##

SRC	=	./src/check_game.c		\
		./src/create_map.c		\
		./src/gameplay.c		\
		./src/main.c			\
		./src/map_utilization.c		\
		./src/my_counter.c		\
		./src/my_errors.c		\
		./src/my_robot.c		\
		./utils/gnl.c			\
		./utils/utils1.c		\
		./utils/utils2.c

NAME	=	matchstick

CFLAGS	=	-ggdb -g -g3 -W -Wall -Wextra

LDFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(LDFLAGS)
	@echo -n "["
	@echo -n -e " \e[1;32mOK\e[0m "
	@echo -n "] "
	@echo -e "\e[1;31m --Build Completed. \e[0m"
	@echo -n "["
	@echo -n -e " \e[1;32mOK\e[0m "
	@echo -n "] "
	@echo -e "\e[1;31m --Compile Completed\e[0m"

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm *~ -f $(NAME)
	rm *# -f $(NAME)
	rm ./src/*~ -f $(NAME)
	rm ./src/*# -f $(NAME)
	rm ./utils/*~ -f $(NAME)
	rm ./utils/*# -f $(NAME)

re:	fclean all

c:	fclean clean
	@echo -n "["
	@echo -n -e " \e[1;32mOK\e[0m "
	@echo -n "] "
	@echo -e "\e[1;31m -- Clean Completed. \e[0m"
