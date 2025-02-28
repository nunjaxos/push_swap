NAME	=	push_swap

SRC		=	srcs/push_swap.c \
			srcs/parcing/parcing.c \
			srcs/struct_funcs/stack_fill.c \
			srcs/parcing/helper_funcs.c \
			srcs/struct_funcs/struct_funcs.c \
			srcs/rules/instructions.c \
			srcs/rules/rules.c \
			srcs/rules/rules2.c \
			srcs/rules/rules3.c \
			srcs/utils/utils.c \
			srcs/sort_funcs/small_sort.c \
			srcs/sort_funcs/big_sort.c \
			srcs/utils/utils2.c \
			srcs/utils/utils3.c \
			srcs/sort_funcs/sort.c \
			srcs/parcing/parse.c


CC		=	cc

CFLAGS	=	-Wall -Werror -Wextra -g

LIBFT	=	libft/libft.a

OBJ		=	$(SRC:.c=.o)

all		:	$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
			$(CC) $(CFLAGS) $(OBJ) -L libft/ -lft -o $(NAME)

%.o	 : %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
		make -s -C libft/
clean:
		make clean -s -C libft
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME) $(NAME)
		make fclean -s -C libft

re:	fclean all


.PHONY: all clean fclean re
