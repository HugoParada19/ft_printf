/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:15:59 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/13 20:55:00 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_hexalen(unsigned int hex)
{
	unsigned int	i;

	i = 0;
	while (hex)
	{
		i++;
		hex /= 16;
	}
	return (i);
}

static char	*ft_ol(unsigned int hex)
{
	char	*num;

	num = malloc(sizeof(char) * 2);
	if (!num)
		return (NULL);
	num[1] = 0;
	if (hex < 10)
		num[0] = hex + 48;
	else
		num[0] = hex + 97;
	return (num);
}

void	ft_puthexa_fd(unsigned int hex, int fd, int *len, bool cap)
{
	char			*num;
	unsigned int	size;

	size = ft_hexalen(hex);
	if (size < 2)
		num = ft_ol(hex);
	else
	{
		num = malloc(sizeof(char) * (size + 1));
		if (!num)
			return ;
		num[size] = 0;
		while (size--)
		{
			if (hex % 16 > 9)
				num[size] = hex % 16 - 10 + 97;
			else
				num[size] = hex % 16 + 48;
			hex /= 16;
		}
	}
	if (cap)
		ft_toupper(num);
	ft_putstr_fd(num, fd, len);
}
