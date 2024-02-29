CFLAGS = gcc -Wall -Wextra -Werror -o
NAME = push_swap

SRC = 	check_input/ft_error.c \
		check_input/ft_print_error.c \
		complexsort/apushb.c \
		complexsort/complexsort.c \
		complexsort/mintotop.c \
		complexsort/prep_for_push.c \
		manage_input/ft_atoi.c \
		manage_input/ft_merge.c \
		manage_input/ft_split.c \
		manage_input/ft_strutils.c \
		manage_input/lstadd.c \
		manage_sort/find_min_cost.c \
		manage_sort/init_t_list.c \
		manage_sort/list_set.c \
		manage_sort/lstsort.c \
		manage_sort/set_push_cost.c\
		operations/push.c \
		operations/reverse_rotate.c \
		operations/rotate.c \
		operations/swap.c \
		simplesort/check_sort.c \
		simplesort/lstmin_max.c \
		simplesort/simplesort.c \
		main.c

all: $(NAME)

$(NAME):
	$(CFLAGS) $(NAME) $(SRC) -I.

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
