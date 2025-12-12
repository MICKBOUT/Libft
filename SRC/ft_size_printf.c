/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:22:24 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 14:26:55 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unsigned_size_printf(unsigned int n, t_flag_printf flag)
{
	if (n == 0 && flag.dot == 0)
		return (0);
	if (n < 10)
		return (1);
	return (1 + ft_unsigned_size_printf(n / 10, flag));
}

int	ft_hexa_size_printf(unsigned int n, t_flag_printf flag)
{
	if (n == 0 && flag.dot == 0)
		return (0);
	if (n < 16)
		return (1);
	return (1 + ft_hexa_size_printf(n / 16, flag));
}

int	ft_ln_len_printf(long int n, t_flag_printf flag)
{
	if (n == 0 && flag.dot == 0)
		return (0);
	if (n < 0)
		return (ft_ln_len_printf(-n, flag));
	if (n < 10)
		return (1);
	return (1 + ft_ln_len_printf(n / 10, flag));
}

int	ft_strlen_printf(char *str, t_flag_printf flag)
{
	if (!str)
	{
		if (flag.dot == -1 || flag.dot > 5)
			return (6);
		return (0);
	}
	return (ft_strlen(str));
}