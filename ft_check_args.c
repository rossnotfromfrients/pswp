#include "push_swap.h"

// Проверка, является ли символ недопустимым (всё, кроме цифр, +, - и пробелов)
static int	is_invalid_char(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
		return (0);
	return (1);
}

// Проверка всех символов аргументов
static void	alpha_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (is_invalid_char(argv[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

// Основная проверка аргументов
int	check_args(char **argv)
{
	alpha_check(argv);
	if (!check_error(argv, 1, 0))
		return (0);
	return (1);
}
