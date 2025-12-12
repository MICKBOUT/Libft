/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:15:02 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 17:28:19 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && (s1[i] || s2[i]))
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	
	return (0);
}
*/