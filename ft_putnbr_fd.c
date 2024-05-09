/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:05:58 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/09 19:39:29 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	g_size = 0;

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		g_size = ft_putstr_fd("-2147483648", fd);
	else
	{
		g_size++;
		if (n < 0)
		{
			ft_putchar_fd(45, fd);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
	return (g_size);
}
