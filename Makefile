##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##
#

CFLAGS	=	-Wall -Wextra

SRC_DIR = 	src/

MAIN	=	$(SRC_DIR)main

SRC	=	$(SRC_DIR)disp_binary.c \
		$(SRC_DIR)disp_binary2.c \
		$(SRC_DIR)disp_char.c \
		$(SRC_DIR)disp_hexa.c \
		$(SRC_DIR)disp_hexa2.c \
		$(SRC_DIR)disp_hexa3.c \
		$(SRC_DIR)disp_int.c \
		$(SRC_DIR)disp_octal.c \
		$(SRC_DIR)disp_octal2.c \
		$(SRC_DIR)disp_p_and_percent_flag.c \
		$(SRC_DIR)disp_str.c \
		$(SRC_DIR)disp_unsigned.c \
		$(SRC_DIR)my_lib.c \
		$(SRC_DIR)lib2.c \
		$(SRC_DIR)lib3.c \
		$(SRC_DIR)my_printf.c \
		$(SRC_DIR)s_maj_flag.c \

TEST	=	tests/test_util1.c \
		tests/test_util2.c \
		tests/test_util3.c \
		tests/test_util4.c \
		tests/test_util5.c \
		tests/test_util6.c \
		tests/test_util7.c \
		tests/test_util8.c \
		tests/test_util9.c \
		tests/test_utils10.c \
		tests/test_utils11.c \
		tests/test_utils12.c \
		tests/test_utils13.c \
		tests/test_utils14.c \
		tests/test_utils15.c \
		tests/test_utils16.c \
		tests/test_utils17.c \
		tests/test_utils18.c \
		tests/test_utils.c \
		tests/test_wrong.c

NAME	=	libmy.a

.PHONY: all $(NAME) test clean fclean re

all:	$(NAME)

$(NAME):	
	gcc -c $(SRC) -Iincludes/
	ar rc $(NAME) *.o
test:
	gcc  $(SRC) $(TEST) -I includes -l criterion -L. -l my && ./a.out

clean:
	rm -rf *.o
	rm -rf vgcor*

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
