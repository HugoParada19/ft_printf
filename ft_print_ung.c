/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ung.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:42:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/09 19:51:56 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_unglen(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_unsigned_itoa(unsigned int n)
{
	char	*num;
	int		i;

	i = ft_unglen(n);
	num = 
}

int	ft_putuns_fd(unsigned int n, int fd)
{
	int		print_l;
	char	*num

	print_l = 0;
	if (!n)
		print_l = ft_putchar(48, fd);
	else
	{
		
	}
}
