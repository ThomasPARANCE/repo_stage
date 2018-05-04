##
## EPITECH PROJECT, 2018
## make
## File description:
## make
##

CC	=	gcc -g3

NAME	=	FooBarQix

SRC	=	srcs/main.c		\
		srcs/contain_nbr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include  -Wextra -Wall

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
