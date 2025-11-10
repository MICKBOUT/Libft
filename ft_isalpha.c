/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:18:04 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/06 15:41:35 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	__builtin_printf("%d\n", ft_isalpha('a'));
	__builtin_printf("%d\n", ft_isalpha('Z'));
	__builtin_printf("%d\n", ft_isalpha('A'));
	__builtin_printf("%d\n", ft_isalpha('Z'));
	__builtin_printf("%d\n", ft_isalpha('`'));
	__builtin_printf("%d\n", ft_isalpha('{'));
	__builtin_printf("%d\n", ft_isalpha('@'));
	__builtin_printf("%d\n", ft_isalpha('['));

	return (0);
}*/