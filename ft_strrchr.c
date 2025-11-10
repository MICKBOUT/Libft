/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:56:14 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:47 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = (NULL);
	c = (char)c;
	while (*s)
	{
		if (*s == c)
			res = (char *) s;
		s++;
	}
	if (c == *s)
		res = (char *) s;
	return (res);
}

/*int	main(void)
{
	const	char *s = "015234567859";

	__builtin_printf("%s", ft_strrchr(s, '\0'));
	return (0);
}*/