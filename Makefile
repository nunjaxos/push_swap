NAME    =   push_swap

SRC =       srcs/parcing/helper_functions.c\
            srcs/parcing/parcing.c\
            srcs/parcing/parse.c\
            srcs/rules/instructions.c\
            srcs/rules/rules_00.c\
            srcs/rules/rules_01.c\
            srcs/rules/rules_02.c\
            srcs/sort_functions/big_sort.c\
            srcs/sort_functions/small_sort.c\
            srcs/sort_functions/sort.c\
			srcs/struct_functions/stack_fill.c\
			srcs/struct_functions/struct_functions.c\
            srcs/utils/utils_00.c\
            srcs/utils/utils_01.c\
            srcs/utils/utils_02.c\
			srcs/push_swap.c\

CC  =   cc

CFLAGS  =	-Wall -Wextra -Werror

LIBFT   =	libft_push/libft_push.a

OBJ =   $(SRC:.c=.o)

all :   $(NAME)

$(NAME):        $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -L libft_push/ -lft -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) :
	make -s -C libft_push/

clean:
	make clean -s -C libft_push
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	make fclean -s -C libft_push

re:      fclean all

.PHONY: all clean fclean re
