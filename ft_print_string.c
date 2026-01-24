/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** print string
*/

#include "ft_printf.h"

int
	ft_print_string(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}