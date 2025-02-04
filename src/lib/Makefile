##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## MakeFile dans le fichier lib
##

NAME = libmy.a

CFLAGS += -Wall -Werror -Wextra -W -Iinclude

LIB =	./my_compute_power_rec.c\
	./my_getnbr.c\
	./my_isneg.c\
	./my_put_nbr.c\
	./my_putchar.c\
	./my_putstr.c\
	./my_revstr.c\
	./my_strcpy.c\
	./my_strlen.c\
	./my_strncpy.c\
	./my_swap.c\
	./my_revstr.c\
	./flag_c.c\
	./flag_d.c\
	./flag_i.c\
	./flag_o.c\
	./flag_percent.c\
	./flag_s.c\
	./flag_x.c\
	./flag_x2.c\
	./my_printf.c\
	./my_str_isnum.c

OBJ_LIB  	=	 $(LIB:.c=.o)

all: 	$(NAME)

$(NAME):	$(OBJ_LIB)
		ar rcs $(NAME) $(OBJ_LIB)
		mv $(NAME) ../../

clean:
		rm -f $(OBJ_LIB)

fclean:
		rm -f $(NAME) $(OBJ_LIB)

re:
		$(MAKE) fclean
		$(MAKE) all
