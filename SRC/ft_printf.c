/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:52:07 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 14:33:35 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_flag(t_flag_printf *flag, char **format)
{
	if ('1' <= **format && **format <= '9')
		(flag->atoi = ft_atoi_printf(format));
	else if (**format == '.')
		(flag->dot = ft_atoi_printf(format));
	else
	{
		if (**format == '#')
			(flag->hash) = 1;
		else if (**format == ' ')
			(flag->space) = 1;
		else if (**format == '+')
			(flag->plus) = 1;
		else if (**format == '-')
			(flag->minus) = 1;
		else if (**format == '0')
			(flag->zero) = 1;
		(*format)++;
	}
}

static int	ft_accepted_argument(char c)
{
	return ((c == 'd') || (c == 'i') || (c == 'c') || (c == 's')
		|| (c == 'p') || (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

static t_flag_printf	ft_init_t_flag(void)
{
	t_flag_printf	flag;

	flag.hash = 0;
	flag.space = 0;
	flag.plus = 0;
	flag.minus = 0;
	flag.zero = 0;
	flag.dot = -1;
	flag.atoi = 0;
	return (flag);
}

static int	ft_print_arg(const char **format, va_list ap)
{
	t_flag_printf	flag;

	flag = ft_init_t_flag();
	(*format)++;
	while (!(ft_accepted_argument(**format)))
		ft_flag(&flag, (char **) format);
	if (**format == 'd' || **format == 'i')
		return (ft_putnbr_printf((long) va_arg(ap, int), flag));
	else if (**format == 'c')
		return (ft_putchar_printf(va_arg(ap, int), flag));
	else if (**format == 's')
		return (ft_putstr_printf(va_arg(ap, char *), flag));
	else if (**format == 'p')
		return (ft_putpointer_printf(va_arg(ap, void *), flag));
	else if (**format == 'u')
		return (ft_putunsigned_printf(va_arg(ap, int), flag));
	else if (**format == 'x')
		return (ft_puthexa_printf(va_arg(ap, int), flag, 0));
	else if (**format == 'X')
		return (ft_puthexa_printf(va_arg(ap, int), flag, 1));
	else if (**format == '%')
		return (write(1, "%%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		n;

	n = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			n += ft_print_arg((&format), ap);
		else
			n += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (n);
}
