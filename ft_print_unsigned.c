/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** print unsigned integer
*/

#include "ft_printf.h"

static int
	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int
	ft_print_unsigned(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n > 9)
		count += ft_print_unsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}