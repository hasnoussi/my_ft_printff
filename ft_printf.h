/*
** EPITECH PROJECT, 2024
** ft_printf
** File description:
** ft_printf header
*/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *, ...);
int	ft_print_char(char c);
int	ft_print_string(char *s);
int	ft_print_deci_integ(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hexa(unsigned long long n);
int	ft_print_hexa_upper(unsigned long long n);
int	ft_print_pointeur(const void *ptr);

#endif
