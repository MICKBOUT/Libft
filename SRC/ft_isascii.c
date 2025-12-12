/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:36:53 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 16:56:38 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	return ((0 <= i && i < 128));
}
/*
#include <ctype.h>
int	main(void)
{
	int i = 128;

	while (i <= 138)
	{
		__builtin_printf("mine:%d|reel:%d\n", ft_isascii(i), isascii(i));
		i++;
	}
	return (0);
}*/
