/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:18:17 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/10 19:35:48 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_callarg(va_list args, char c, int *print_l)
{
	if (c == 99)
		ft_putchar_fd(va_arg(args, int), 1, print_l);
	if (c == 115)
		ft_putstr_fd(va_arg(args, char *), 1, print_l);
	if (c == 112)
		ft_putptr_fd(va_arg(args, unsigned long long), 1, print_l);
	if (c == 100 || c == 105)
		ft_putnbr_fd(va_arg(args, int), 1, print_l);
	if (c == 117)
		ft_print_ung_fd(va_arg(args, unsigned int), 1, print_l);
}

int	ft_printf(const char *s, ...)
{
	int		*print_l;
	va_list	args;
	int		print_c;

	print_c = 0;
	print_l = &print_c;
	va_start(args, s);
	while (*s)
	{
		if (*s == 37)
		{
			s++;
			ft_callarg(args, *s, print_l);
		}
		else
			ft_putchar_fd(*s, 1, print_l);
		s++;
	}
	printf("%d\n", print_c);
	va_end(args);
	return (print_c);
}
