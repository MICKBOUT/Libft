/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:57:32 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 17:41:24 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*x;
	size_t	i;

	i = -1;
	x = (char *)s;
	while (++i < n)
		*(x++) = 0;
}
/*
int	main(void)
{
	char buf[] = "zyxwvutsrqponmlkjihgfedcba";

	size_t n = 5;
	size_t i = 0;
	(void)n;
	__builtin_printf("%s\n", buf);
	ft_bzero(buf, n);
	while (i < 27)
	{
		__builtin_printf("%c\n", buf[i]);
		i++;
	}
	return (0);
}
*/