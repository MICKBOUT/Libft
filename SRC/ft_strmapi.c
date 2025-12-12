/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:26:14 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/07 22:26:14 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
static char	ft_add1(unsigned int	i, char	c)
{
	(void) i;
	return (c + 1);
}

int	main(void)
{

	const char *s = "1";
	char *str = ft_strmapi(s, &ft_add1);
	__builtin_printf("%s", str);
	return (0);
}*/