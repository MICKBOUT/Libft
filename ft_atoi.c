/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:22:00 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 17:03:58 by mboutte          ###   ########.fr       */
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
/*
int	main(void)
{
	char	test[] = "  45";	
	__builtin_printf("%d", ft_atoi(test));
	return (0);
}*/
