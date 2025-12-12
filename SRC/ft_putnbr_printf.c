/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:31:19 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/09 12:31:19 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr_rec(long int n, int leading_zero, t_flag_printf flag)
{
	char	c;

	if (leading_zero > 0)
		return (write(1, "0", 1) + ft_putnbr_rec(n, leading_zero - 1, flag));
	if (flag.dot == 0 && n == 0)
		return (0);
	c = (n % 10) + '0';
	if (n < 10)
		return (write(1, &c, 1));
	return (ft_putnbr_rec(n / 10, 0, flag) + write(1, &c, 1));
}

static int	ft_putnbr_space(long int n, t_flag_printf flag)
{
	int		size;
	char	c;
	int		i;

	c = ' ';
	if (flag.zero == 1)
		c = '0';
	size = ft_max(ft_ln_len_printf(n, flag), flag.dot);
	if (n < 0 || flag.plus == 1 || flag.space == 1)
		size++;
	i = 0;
	while (size + i < flag.atoi)
		i += write(1, &c, 1);
	return (i);
}

int	ft_putflag(long int n, t_flag_printf flag)
{
	if (n < 0)
		return (write(1, "-", 1));
	if (flag.plus == 1)
		return (write(1, "+", 1));
	if (flag.space == 1)
		return (write(1, " ", 1));
	return (0);
}

int	ft_putnbr_printf(long int n, t_flag_printf flag)
{
	int	count;
	int	leading_zero;

	count = 0;
	if (flag.dot == -1 && flag.zero == 1 && flag.atoi == 0 && n == 0)
		return (write(1, "0", 1));
	if (flag.dot != -1 && flag.atoi > 0 && flag.zero == 1)
		flag.zero = 0;
	if (flag.dot == -1 && flag.zero == 1)
		flag.dot = flag.atoi - (n < 0 || flag.plus == 1 || flag.space == 1);
	if (flag.minus == 0 && flag.atoi > 0)
		count += (ft_putnbr_space((long int) n, flag));
	count += ft_putflag((long int) n, flag);
	leading_zero = flag.dot - ft_ln_len_printf((long int) n, flag);
	if (n < 0)
		count += ft_putnbr_rec(-n, leading_zero, flag);
	else
		count += ft_putnbr_rec(n, leading_zero, flag);
	if (flag.minus == 1 && flag.atoi > 0)
		count += (ft_putnbr_space((long int) n, flag));
	return (count);
}
