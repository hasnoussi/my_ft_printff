/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** print character
*/

#include "ft_printf.h"

int
	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}