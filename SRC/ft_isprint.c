/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:45:48 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 16:56:24 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	return (32 <= i && i <= 126);
}
/*
int	main(void)
{
	int	i = 0;

	while (i < 2048)
	{
		if (ft_isprint(i) == 0 && isprint(i) != 0)
			__builtin_printf("%d\n", i);
		if (ft_isprint(i) != 0 && isprint(i) == 0)
			__builtin_printf("%d\n", i);
		i++;
	}
	return (0);
}
	*/