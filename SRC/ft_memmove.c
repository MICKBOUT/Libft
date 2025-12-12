/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:51:18 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:39 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = -1;
	if (!dest && !src)
		return (dest);
	if (d < s)
		while (++i < n)
			d[i] = s[i];
	else
		while (n-- > 0)
			d[n] = s[n];
	return (dest);
}
/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "/home/mat/francinette/temp/libft/war-machine/libft.h"

int		main(int argc, const char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	
	if (src != ft_memmove(src, dest, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
	return (0);
}*/