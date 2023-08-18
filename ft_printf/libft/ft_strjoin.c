/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 02:39:42 by iergun            #+#    #+#             */
/*   Updated: 2023/01/04 02:39:46 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *d1, char const *d2)
{
	char	*d3;
	size_t	i;
	size_t	j;
	size_t	alan;

	i = 0;
	j = 0;
	if ((!d1 || !d2))
		return (NULL);
	alan = (ft_strlen(d1) + ft_strlen(d2));
	d3 = malloc(sizeof(char) * alan + 1);
	if (!d3)
		return (NULL);
	while (d1[i])
	{
		d3[i] = d1[i];
		i++;
	}
	while (d2[j])
	{
		d3[i++] = d2[j];
		j++;
	}
	d3[i] = '\0';
	return (d3);
}
