##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC = src/main.c \
		requirement.c \
		src/openfile.c \
		src/arrstok_func.c \
		src/add_parse.c \
		src/spec_parse.c \
		src/init_struct.c \
		src/print_simple.c \
		src/sort.c \
		src/get_flag.c \
		src/clean_str.c \
		src/search_to_print.c \
		src/print_json.c \

CC        = gcc -g

LFLAGS    = -L./lib/my -lmy

OBJS    = $(SRC:.c=.o)

EXEC    = SBMLparser

all: ${EXEC}

${EXEC}: ${OBJS}
		make -C lib/my/
		${CC} -o ${EXEC} ${OBJS} ${LFLAGS} -Wall -Wextra

clean:
		rm -f ${OBJS}

fclean:
		make fclean -C lib/my/
		rm -f ${OBJS}
		rm -f ${EXEC}

re: fclean all

.PHONY: all clean fclean re
