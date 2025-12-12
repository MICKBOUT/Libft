/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:07:18 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 14:35:17 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putpointer_recu(unsigned long ptr)
{
	char	c;
	char	*hexa;
	int		count;

	hexa = "0123456789abcdef";
	count = 0;
	if (ptr != 0)
	{
		c = hexa[ptr % 16];
		count = 1 + ft_putpointer_recu(ptr / 16);
		write(1, &c, 1);
	}
	return (count);
}

static int	ft_putpointer_flag(void *ptr, t_flag_printf flag)
{
	int	size;
	int	atoi;

	size = ft_ptrlen((unsigned long)ptr) + 2;
	if (!ptr)
		size = 5;
	atoi = flag.atoi;
	flag.atoi = 0;
	if (flag.minus == 0)
	{
		while (size < atoi)
			size += write(1, " ", 1);
	}
	ft_putpointer_printf(ptr, flag);
	if (flag.minus == 1)
		while (size < atoi)
			size += write(1, " ", 1);
	return (size);
}

int	ft_putpointer_printf(void *ptr, t_flag_printf flag)
{
	if (flag.atoi > 0)
		return (ft_putpointer_flag(ptr, flag));
	if (!ptr)
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + ft_putpointer_recu((unsigned long) ptr));
}
