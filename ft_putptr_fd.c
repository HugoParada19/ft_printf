/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:49:58 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/09 19:14:13 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(uintptr_t ptr)
{
	int	i;

	i = 0;
	while (ptr)
	{
		i++;
		ptr /= 16;
	}
	return (i);
}

static int	ft_ptr(uintptr_t ptr, int fd)
{
	if (ptr > 15)
	{
		ft_ptr(ptr / 16);
		ft_ptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar_fd((ptr + 48), fd);
		else
			ft_putchar_fd((ptr - 10 + 97), fd);
	}
}

int	ft_putptr_fd(unsigned long long ptr, int fd)
{
	int	print_l;

	print_l = ft_putstr_fd("0x", fd);
	if (!ptr)
		return (print_l + ft_putchar_fd('0', fd));
	ft_ptr(ptr);
	print_l += ft_ptr_len(ptr);
	return (print_l);
}
