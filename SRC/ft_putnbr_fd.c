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
