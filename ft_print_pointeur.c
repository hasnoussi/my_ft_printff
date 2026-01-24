/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** print pointer
*/

#include "ft_printf.h"

int
	ft_print_pointeur(const void *ptr)
{
	int				count;
	unsigned long long	ptrc;

	count = 0;
	ptrc = (unsigned long long)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_print_hexa(ptrc);
	return (count);
}