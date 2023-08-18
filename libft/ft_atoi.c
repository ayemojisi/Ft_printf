/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:15:03 by iergun            #+#    #+#             */
/*   Updated: 2023/01/04 20:14:52 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *d1)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*d1 == ' ' || (*d1 >= 9 && *d1 <= 13))
		d1++;
	if (*d1 == '-')
		sign = -1;
	if (*d1 == '+' || *d1 == '-')
		d1++;
	while (ft_isdigit(*d1))
	{
		number = (number * 10) + (*d1 - '0') * sign;
		d1++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number);
}
