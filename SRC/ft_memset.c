/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:17:24 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:41 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*x;
	size_t	i;

	i = 0;
	x = (char *)s;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char buf[] = "zyxwvutsrqponmlkjihgfedcba";

	size_t n = 5;
	size_t i = 0;
	(void)n;
	__builtin_printf("%s\n", buf);
	ft_memset(buf, 48, n);
	while (i < 26)
	{
		__builtin_printf("%c\n", buf[i]);
		i++;
	}
	return(0);
}*/
