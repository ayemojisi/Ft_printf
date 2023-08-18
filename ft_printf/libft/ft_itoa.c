/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 07:29:59 by iergun            #+#    #+#             */
/*   Updated: 2023/01/09 20:28:43 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		i = 1;
	}
	while (c)
	{
		i++;
		c = c / 10;
		if (c == 0)
			break ;
	}
	return (i);
}

static char	*chartranstlate(int n, int strlen, int i, char *str)
{
	while (strlen >= 0)
	{
		i = n % 10;
		str[strlen--] = i + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		strlen;
	char	*str;
	int		rkm;
	int		sign;

	strlen = intlen(n);
	rkm = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * strlen + 1);
	if (!str)
		return (0);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	str[strlen--] = '\0';
	chartranstlate(n, strlen, rkm, str);
	if (sign == -1 && str[0] == '0')
		str[0] = '-';
	return (str);
}
