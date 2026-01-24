/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** print decimal integer
*/

#include "ft_printf.h"

static int
	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int
	ft_print_deci_integ(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb == -2147483648)
		count = write(1, "-2147483648", 11);
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		count += ft_print_deci_integ(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}