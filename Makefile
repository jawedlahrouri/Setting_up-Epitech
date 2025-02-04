##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## makefile
##

pathdir = src/lib

NAME = setting_up

SRC	=	./src/my_str_to_point_array.c \
		./src/setting_up.c \
		./src/parse_matrice.c \
		./src/handle_memory.c \
		./src/generate_map.c \
		$(pathdir)/my_compute_power_rec.c \
		$(pathdir)/my_compute_square_root.c \
		$(pathdir)/my_isneg.c \
		$(pathdir)/my_put_nbr.c \
		$(pathdir)/my_putchar.c \
		$(pathdir)/my_putstr.c \
		$(pathdir)/my_revstr.c \
		$(pathdir)/my_strcat.c \
		$(pathdir)/my_strcpy.c \
		$(pathdir)/my_strlen.c \
		$(pathdir)/my_strncat.c \
		$(pathdir)/my_strncpy.c \
		$(pathdir)/flag_c.c \
		$(pathdir)/flag_d.c \
		$(pathdir)/flag_i.c \
		$(pathdir)/flag_o.c \
		$(pathdir)/flag_percent.c \
		$(pathdir)/flag_s.c \
		$(pathdir)/flag_x.c \
		$(pathdir)/flag_x2.c \
		$(pathdir)/my_printf.c \

OBJ  	=	 $(SRC:.c=.o)

LIB_OBJ =  $(LIB:.c=.o)

CFLAGS = -g -W -Wall -Wextra -Iinclude -Ilib/include
all: 	$(NAME)
		$(MAKE) clean

$(NAME):	$(OBJ)
		$(MAKE) -C src/lib all
		gcc $(CFLAGS) -o $(NAME) $(OBJ) libmy.a
		rm libmy.a

clean:
		$(MAKE) -C src/lib clean
		rm -f $(OBJ)

fclean:
		rm -f $(NAME) debug $(OBJ) libmy.a

re:
		$(MAKE) fclean
		$(MAKE) all
		$(MAKE) clean
