
/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** main printf function
*/

#include "ft_printf.h"

static int
	ft_check(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_print_char(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count = ft_print_deci_integ(va_arg(args, int));
	else if (c == 's')
		count = ft_print_string(va_arg(args, char *));
	else if (c == 'u')
		count = ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_print_hexa((unsigned long long)
			va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_print_hexa_upper((unsigned long long)
			va_arg(args, unsigned int));
	else if (c == 'p')
		count = ft_print_pointeur(va_arg(args, void *));
	else if (c == '%')
		count = ft_print_char('%');
	return (count);
}

int
	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			count += ft_check(args, format[i + 1]);
			i += 2;
		}
		else
		{
			count += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (count);
}
