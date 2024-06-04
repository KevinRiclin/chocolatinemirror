##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## for makefile
##

SRC = concat_params.c \
      pow_rec.c \
      my_compute_square_root.c \
      my_find_prime_sup.c \
      my_getnbr.c \
      my_isneg.c \
      my_is_prime.c \
      my_put_nbr.c \
      my_putstr.c \
      my_revstr.c \
      my_showmem.c \
      my_showstr.c \
      my_show_word_array.c \
      my_sort_int_array.c \
      my_strcat.c \
      my_strcmp.c \
      my_strcpy.c \
      my_strdup.c \
      my_strlen.c \
      my_strncat.c \
      my_strncmp.c \
      my_strncpy.c \
      my_strstr.c \
      my_str_to_word_array.c \
      my_strupcase.c \
      my_swap.c \
      my_count_nbr.c \
      switch_int.c \
      int_to_str.c \
      my_exit.c

NAME = libmy.a

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
      ##cp $(NAME) ../../

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
