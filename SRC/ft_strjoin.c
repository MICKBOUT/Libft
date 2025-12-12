/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:20:11 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 17:30:42 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(char)
			* (ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

/*int	main(void)
{
	const char	*s1 = "test1";
	const char	*s2 = "test2";

	__builtin_printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
