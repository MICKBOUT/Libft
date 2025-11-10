/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:32:42 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/07 21:32:42 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs_mod(int n)
{
	if (n == -2147483648)
		return (8 + '0');
	else if (n < 0)
		n = -n;
	return (n % 10 + '0');
}

static int	ft_itoa_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_itoa_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n == 0)
	{
		size--;
		str[0] = '0';
	}
	while (n != 0)
	{
		str[--size] = ft_abs_mod(n);
		n /= 10;
	}
	if (size > 0)
		str[0] = '-';
	return (str);
}

/*int main(void)
{
	__builtin_printf("%s\n", ft_itoa(1234));
	__builtin_printf("%s\n", ft_itoa(0));
	__builtin_printf("%s\n", ft_itoa(-123));
	__builtin_printf("%s\n", ft_itoa(1234567890));
}*/