/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:30:03 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 14:34:51 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_puthexa_recu(long int n, int leading_zero, int maj)
{
	char	c;
	char	*hexa;

	if (leading_zero > 0)
		return (write(1, "0", 1) + ft_puthexa_recu(n, leading_zero - 1, maj));
	hexa = "0123456789abcdef";
	if (maj == 1)
		hexa = "0123456789ABCDEF";
	c = hexa[n % 16];
	if (n < 16)
		return (write(1, &c, 1));
	return (ft_puthexa_recu(n / 16, 0, maj) + write(1, &c, 1));
}

static int	ft_puthexa_space(unsigned int n, t_flag_printf flag)
{
	int		size;
	char	c;
	int		i;

	c = ' ';
	if (flag.zero == 1 && flag.dot == -1)
		c = '0';
	size = ft_max(ft_hexa_size_printf(n, flag), flag.dot);
	if (flag.hash == 1)
		size += 2;
	i = 0;
	while (size + i < flag.atoi)
		i += write(1, &c, 1);
	return (i);
}

int	ft_puthexa_printf(unsigned int n, t_flag_printf flag, int maj)
{
	int	count;
	int	leading_zero;

	count = 0;
	if (flag.dot == -1 && flag.zero == 1 && flag.atoi == 0 && n == 0)
		return (write(1, "0", 1));
	if (flag.dot == -1 && flag.zero == 1)
		flag.dot = flag.atoi - ((n > 0 && flag.hash) * 2);
	if (flag.minus == 0 && flag.atoi > 0)
		count += (ft_puthexa_space(n, flag));
	if (n > 0 && flag.hash && maj == 0)
		count += (write(1, "0x", 2));
	else if (n > 0 && flag.hash && maj == 1)
		count += (write(1, "0X", 2));
	leading_zero = flag.dot - ft_hexa_size_printf(n, flag);
	if (flag.dot != 0 || n != 0)
		count += ft_puthexa_recu(n, leading_zero, maj);
	if (flag.minus == 1 && flag.atoi > 0)
		count += (ft_puthexa_space(n, flag));
	return (count);
}
