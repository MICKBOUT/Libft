/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:00:13 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 11:10:30 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			s;
	size_t			i;
	unsigned char	*dest;

	i = 0;
	if (nmemb > 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	s = nmemb * size;
	dest = malloc(s);
	if (!dest)
		return (NULL);
	while (i < s)
		dest[i++] = 0;
	return (dest);
}
/*
int	main(void)
{
	size_t size = 10;
	size_t nmemb = 5;

	ft_calloc(nmemb, size);
	return (0);
}*/
/*Depending on your current operating system, the ’calloc’ function’s
behavior may differ from its man page description. Follow this
rule instead: If nmemb or size is 0, then calloc() returns a unique
pointer value that can be successfully passed to free().*/