/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:18:17 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/09 19:51:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_callarg(va_list args, char c)
{
	int	print_l;

	if (c == 99)
		print_l = ft_putchar_fd(va_arg(args, char), 1);
	if (c == 115)
		print_l = ft_putstr_fd(va_arg(args, char *), 1);
	if (c == 112)
		print_l = ft_putptr_fd(va_arg(args, unsigned long long), 1);
	if (c == 100 || c == 105)
		print_l = ft_putnbr_fd(va_arg(args, int), 1);
	if (c == 117)
		print_l = ft_putuns_fd(va_arg(args, unsigned int), 1);
	return (print_l);
}

int	ft_printf(const char *s, ...)
{
	int		print_l;
	va_list	args;

	print_l = 0;
	va_start(args, str);
	while (*s)
	{
		if (*s == 37)
			print_l += ft_callarg(args, ++s);
		else
			print_l += ft_putchar_fd(*s, 1);
		s++;
	}
	va_end(args);
	return (print_l);
}
