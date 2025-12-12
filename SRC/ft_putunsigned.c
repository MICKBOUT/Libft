/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:05:46 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 14:35:24 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putunsigned_rec(long int n, int leading_zero)
{
	char	c;

	if (leading_zero > 0)
		return (write(1, "0", 1) + ft_putunsigned_rec(n, leading_zero - 1));
	c = (n % 10) + '0';
	if (n < 10)
		return (write(1, &c, 1));
	return (ft_putunsigned_rec(n / 10, 0) + write(1, &c, 1));
}

static int	ft_unsigned_flag(unsigned int n, t_flag_printf flag)
{
	int		size;
	char	c;
	int		i;

	c = ' ';
	if (flag.zero == 1)
		c = '0';
	size = ft_max(ft_unsigned_size_printf(n, flag), flag.dot);
	i = 0;
	while (size + i < flag.atoi)
		i += write(1, &c, 1);
	return (i);
}

int	ft_putunsigned_printf(unsigned int n, t_flag_printf flag)
{
	int	count;
	int	leading_zero;

	count = 0;
	if (flag.dot == -1 && flag.zero == 1 && flag.atoi == 0 && n == 0)
		return (write(1, "0", 1));
	if (flag.dot != -1 && flag.atoi > 0 && flag.zero == 1)
		flag.zero = 0;
	if (flag.dot == -1 && flag.zero == 1)
		flag.dot = flag.atoi;
	if (flag.minus == 0 && flag.atoi > 0)
		count += (ft_unsigned_flag(n, flag));
	leading_zero = flag.dot - ft_unsigned_size_printf(n, flag);
	if (flag.dot != 0 || n != 0)
		count += ft_putunsigned_rec(n, leading_zero);
	if (flag.minus == 1 && flag.atoi > 0)
		count += (ft_unsigned_flag(n, flag));
	return (count);
}
