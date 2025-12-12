/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:50:53 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/07 22:50:53 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char	*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
static void	ft_add1(unsigned int	i, char	*c)
{
	char *s;

	(void) i;
	*c = (*c) + 1;
}
int	main(void)
{

	char s[] = "a1b2c3d4";
	__builtin_printf("|%s|\n", s);
	ft_striteri(s, &ft_add1);
	__builtin_printf("\\final=%s|", s);
	return (0);
}*/