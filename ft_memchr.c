/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:57:12 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 17:25:52 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;

	c = (unsigned char)c;
	tmp_s = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*tmp_s == c)
			return ((void *)tmp_s);
		tmp_s++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const void *s = "string with an egg in it";
	int	c = 102;
	size_t n = 20;

	__builtin_printf("%s", (char *)ft_memchr(s, c, n));
	return (0);
}
*/