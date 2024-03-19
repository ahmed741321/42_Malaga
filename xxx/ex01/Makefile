# Define variables
NAME = libft.a
SRCS_DIR = srcs
INCLUDES_DIR = includes

# Define source files
SRCS = $(addprefix $(SRCS_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Phony targets
.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Compile the library
$(NAME): $(OBJS)
	@echo "Building $(NAME)"
	@ar rcs $(NAME) $(OBJS)

# Compile individual object files
$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

# Clean up temporary files
clean:
	@echo "Cleaning up"
	@rm -f $(OBJS)

# Remove all generated files
fclean: clean
	@echo "Force cleaning"
	@rm -f $(NAME)

# Recompile everything
re: fclean all
