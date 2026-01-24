/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** print hexadecimal (lowercase)
*/

#include "ft_printf.h"

int
	ft_print_hexa(unsigned long long n)
{
	const char	*base;
	char		buf[17];
	int			i;
	int			count;

	base = "0123456789abcdef";
	i = 0;
	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		buf[i] = base[n % 16];
		n /= 16;
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		count += write(1, &buf[i], 1);
		i--;
	}
	return (count);
}