/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:49:02 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/08 19:49:02 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_putchar_printf(char c, t_flag_printf flag)
{
	int	count;

	if (flag.atoi == 0)
		return (write(1, &c, 1));
	count = 1;
	if (flag.minus == 0)
		while (count < flag.atoi)
			count += write(1, " ", 1);
	write(1, &c, 1);
	if (flag.minus == 1)
		while (count < flag.atoi)
			count += write(1, " ", 1);
	return (count);
}
