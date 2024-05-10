/* ************************************************************************** */
/*                 our project folder, you'll want to make something like a "discord-files" folder, for organization. In that                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:09:20 by htrindad          #+#    #+#             */
/*   Updated: 2024/05/10 19:16:51 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_strlen(const char *str);
void		ft_putchar_fd(char c, int fd, int *len);
void		ft_putnbr_fd(int n, int fd, int *len);
void		ft_putstr_fd(char *s, int fd, int *len);
int			ft_printf(const char *s, ...);
void		ft_putptr_fd(unsigned long long ptr, int fd, int *len);
void		ft_print_ung_fd(unsigned int n, int fd, int *len);

#endif
