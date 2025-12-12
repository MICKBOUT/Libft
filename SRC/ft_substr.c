/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:43:04 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 17:44:21 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = ft_strlen(s);
	if (i <= start)
	{
		res = (malloc(sizeof(char)));
		if (!res)
			return (NULL);
		res[0] = 0;
		return (res);
	}
	if (i - start < len)
		len = (i - start);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
int	main(void)
{
	__builtin_printf("%s\n", ft_substr("", 0, 0));
	return (0);
}*/
