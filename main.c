/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** test main
*/

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int
	main(void)
{
	void	*p;
	void	*z;
	int		a;
	int		b;

	p = (void *)0x7ffeeabc1234;
	z = NULL;
	ft_printf("===== TESTS FT_PRINTF =====\n");
	a = ft_printf("1: %c %s %p %d %i %u %x %X %%\n",
		'A', "hello", p, -42, 42, 4294967295u, 255, 255);
	ft_printf("ft_printf return = %d\n", a);
	printf("===== TESTS PRINTF ORIGINAL =====\n");
	b = printf("1: %c %s %p %d %i %u %x %X %%\n",
		'A', "hello", p, -42, 42, 4294967295u, 255, 255);
	printf("printf return = %d\n", b);
	ft_printf("===== CAS PARTICULIERS =====\n");
	ft_printf("NULL string  : [%s]\n", (char *)0);
	ft_printf("NULL pointer : [%p]\n", z);
	ft_printf("Zero decimal : [%d]\n", 0);
	ft_printf("Zero unsigned: [%u]\n", 0u);
	ft_printf("Zero hex     : [%x]\n", 0u);
	ft_printf("salut je m'appelle %s et j'ai %d ans\n", "Alice", 30);
	printf("salut je m'appelle %s et j'ai %d ans\n", "Alice", 30);
	return (0);
}
