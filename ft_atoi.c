/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:22:00 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 17:52:36 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				signe;
	unsigned int	res;	

	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == ' '))
		i++;
	signe = 1;
	res = 0;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9' && str[i])
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * signe);
}
/*
int	main(void)
{
	char	test[] = "  45";	
	__builtin_printf("%d", ft_atoi(test));
	return (0);
}*/
