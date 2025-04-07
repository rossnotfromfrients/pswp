# === Компилятор и флаги ===
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

# === Название финального исполняемого файла ===
NAME    = push_swap

# === Пути ===
SRC_DIR = .
LIBFT_DIR = ./libft
INCLUDES = -I$(SRC_DIR) -I$(LIBFT_DIR)

# === Список исходников ===
SRC = \
	algorytm.c \
	ft_add_back.c \
	ft_checkdup.c \
	ft_check_args.c \
	ft_free.c \
	list_args.c \
	ft_mainsort.c \
	ft_new_stack.c \
	ft_parse_args_quoted.c \
	ft_rotate_and_push.c \
	ft_rotate_grand.c \
	ft_sort_if_3.c \
	ft_sorted_check.c \
	operations.c \
	operations2.c \
	operations3.c \
	podschet_oper_ab.c \
	podschet_oper_ba.c \
	print_error.c \
	push_swap.c \
	stackplace_utils.c \
	utils_last.c

# === Генерация объектных файлов ===
OBJ = $(SRC:.c=.o)

# === Библиотека ===
LIBFT_A = $(LIBFT_DIR)/libft.a
LIBS    = -L$(LIBFT_DIR) -lft

# === Основные цели ===

all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	@rm -f $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
