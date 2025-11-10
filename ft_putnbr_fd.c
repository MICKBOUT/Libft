/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:31:19 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/09 12:31:19 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	write(fd, str, ft_strlen(str));
}*/

static void	ft_putnbr_rec(unsigned int n, int fd)
{
	char	c;

	if (n != 0)
	{
		c = (n % 10) + '0';
		ft_putnbr_rec(n / 10, fd);
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n > 0)
		ft_putnbr_rec((unsigned int) n, fd);
	else
	{
		write(fd, "-", 1);
		ft_putnbr_rec((unsigned int) -n, fd);
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(-1000, 1);
	return (0);
}*/