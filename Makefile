# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Name of the output executable
NAME = push_swap

# Source files
SRC = check_input/ft_error.c \
      check_input/ft_print_error.c \
      complexsort/apushb.c \
      complexsort/complexsort.c \
      complexsort/mintotop.c \
      complexsort/prep_for_push.c \
      manage_input/ft_atoi.c \
	  manage_input/ft_atol.c \
      manage_input/ft_merge.c \
      manage_input/ft_split.c \
      manage_input/ft_strutils.c \
      manage_input/lstadd.c \
      manage_sort/find_min_cost.c \
      manage_sort/init_t_list.c \
      manage_sort/list_set.c \
      manage_sort/lstsort.c \
      operations/push.c \
      operations/reverse_rotate.c \
      operations/rotate.c \
      operations/swap.c \
      simplesort/check_sort.c \
      simplesort/lstmin_max.c \
      simplesort/simplesort.c \
      main.c

# Object files
OBJ = $(SRC:.c=.o)

# Default target
all: $(NAME)

# Link the object files into the executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -I.

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and the executable
clean:
	rm -f $(OBJ)

# Full clean
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re
