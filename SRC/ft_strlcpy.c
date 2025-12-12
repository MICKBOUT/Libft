/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:53:23 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:44 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = -1;
	res = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[res])
		res++;
	if (size - 1 > res)
		while (src[++i])
			dst[i] = src[i];
	else
		while (++i < size - 1)
			dst[i] = src[i];
	dst[i] = '\0';
	return (res);
}

/*#include <stdlib.h>

int	main(void)
{
	char	*dst;
	const char	*src = "0123456789";
	size_t	size = 12;

	dst = malloc(size);
	__builtin_printf("ft = %zu\n", ft_strlcpy(dst, src, size));
	__builtin_printf("cp = %s", dst);
	free(dst);
	return (0);
}
*/