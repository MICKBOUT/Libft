/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:18:04 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/12 16:56:49 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	return (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'));
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