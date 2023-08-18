/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:20:28 by iergun            #+#    #+#             */
/*   Updated: 2023/01/13 07:58:55 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_scan(char c, va_list macro)
{
	if (c == 'c')
		return (ft_putchar(va_arg(macro, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(macro, char *)));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_putpointer(va_arg(macro, void *)) + 2);
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(macro, int)));
	else if (c == 'u')
		return (ft_putunint(va_arg(macro, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'x')
		return (ft_putstr(
				ft_convert(va_arg(macro, unsigned int), "0123456789abcdef")));
	else if (c == 'X')
		return (ft_putstr(
				ft_convert(va_arg(macro, unsigned int), "0123456789ABCDEF")));
	else
		return (write(1, &c, 1));
	return (0);
}

char	*ft_convert(size_t num, char *set)
{
	static char	buffer[17];
	char		*ptr;
	int			base;

	base = ft_strlen(set);
	ptr = &buffer[1];
	*ptr = '\0';
	*--ptr = set[num % base];
	num /= base;
	while (num != 0)
	{
		*--ptr = set[num % base];
		num /= base;
	}
	return (ptr);
}

int	ft_printf(const char *sie, ...)
{
	va_list	macro;
	int		i;
	int		len;

	va_start(macro, sie);
	i = 0;
	len = 0;
	while (sie[i] && sie[i + 1])
	{
		if (sie[i] == '%' )
		{
			len += ft_scan(sie[i + 1], macro);
			i++;
		}
		else
			len += write(1, &sie[i], 1);
		i++;
	}
	if (sie[i] == '%')
		write(1, "%", 1);
	va_end(macro);
	return (len);
}
