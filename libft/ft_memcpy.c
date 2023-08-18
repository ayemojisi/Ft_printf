/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:33:45 by iergun            #+#    #+#             */
/*   Updated: 2022/12/21 03:34:10 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d1, const void *d2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)d1;
	s2 = (char *)d2;
	if (s1 == (NULL) && s2 == (NULL))
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
