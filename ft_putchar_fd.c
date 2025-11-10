/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:49:02 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/08 19:49:02 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
	ft_putchar_fd('1', 1);
	ft_putchar_fd('2', 1);
	ft_putchar_fd('3', 1);
	ft_putchar_fd('4', 1);
	ft_putchar_fd('5', 1);
	return (0);
}*/