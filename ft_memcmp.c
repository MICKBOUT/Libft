/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:57:53 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:38 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = -1;
	while (++i < n)
		if ((unsigned char) a[i] != (unsigned char) b[i])
			return ((unsigned char) a[i] - (unsigned char) b[i]);
	return (0);
}
/*
int	main(void)
{
	const void	*s1 = "0123456789";
	const void	*s2 = "012345689";

	__builtin_printf("%d", ft_memcmp(s1, s2, 10));
	return (0);
}*/
