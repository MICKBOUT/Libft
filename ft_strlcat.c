/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:10:36 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:43 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_d;
	unsigned int	size_s;

	j = 0;
	size_d = 0;
	while (dest[size_d])
		size_d++;
	size_s = 0;
	while (src[size_s])
		size_s++;
	i = size_d;
	if (size < 1)
		return (size_s + size);
	while (size > i + 1 && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (size < size_d)
		return (size_s + size);
	return (size_s + size_d);
}

/*
#include <string.h>
int	main(void)
{
	char	c1[] = "12345";
	char	c2[] = "6789";
	__builtin_printf("%s:%s\n", c1, c2);	
	__builtin_printf("%ld\n", ft_strlcat(c1, c2, 0));
	__builtin_printf("%s:%s", c1, c2);
	return (0);
}
*/