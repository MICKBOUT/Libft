/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:22:00 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 14:53:54 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	res;	

	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	res = 0;
	if ((str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			sign = -1;
	while ('0' <= str[i] && str[i] <= '9' && str[i])
		res = (res * 10) + str[i++] - '0';
	return (res * sign);
}

int	ft_atoi_printf(char **str)
{
	unsigned int	res;	

	res = 0;
	if (**str == '.')
		(*str)++;
	while ('0' <= **str && **str <= '9' && **str)
	{
		res = (res * 10) + (int)**str - '0';
		(*str)++;
	}
	return (res);
}
