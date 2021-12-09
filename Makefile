STRSRC = write_to_file.c\

RDSRC = read_from_file.c\
get_next_line/get_next_line.c\
get_next_line/get_next_line_utils.c\

FT_PRINTF = ../libftprintf.a

NAME1 = printf_tester

NAME2 = checker

FLAGS = -Wall -Werror -Wextra

all	:	$(NAME1) $(NAME2)

$(FT_PRINTF):
	make -C ../

$(NAME1):	$(STRSRC) $(FT_PRINTF)
	gcc $(FLAGS) $^ -o $(NAME1)

$(NAME2):	$(RDSRC) $(FT_PRINTF)
	gcc $(FLAGS) $^ -o $(NAME2)

clean	:
	make clean -C ../
	rm -f $(STROBJ)

fclean	:	clean
	make fclean -C ../
	rm -f $(NAME)

re		: fclean all