/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:54:24 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/08 19:54:24 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putstr_flag_atoi(char *s, t_flag_printf flag)
{
	int		size;
	int		i;

	size = ft_min_printf(ft_strlen_printf(s, flag), flag.dot);
	i = 0;
	while (size + i < flag.atoi)
		i += write(1, " ", 1);
	return (i);
}

static int	ft_write_null(t_flag_printf flag)
{
	if (flag.dot == -1 || flag.dot > 5)
		return (write(1, "(null)", 6));
	return (0);
}

int	ft_putstr_printf(char *s, t_flag_printf flag)
{
	int	count;

	count = 0;
	if (flag.atoi > 0 && flag.minus == 0)
		count += (ft_putstr_flag_atoi(s, flag));
	if (!s)
		count += ft_write_null(flag);
	else
		count += (write(1, s, ft_min_printf(ft_strlen(s), flag.dot)));
	if (flag.atoi > 0 && flag.minus == 1)
		count += (ft_putstr_flag_atoi(s, flag));
	return (count);
}
