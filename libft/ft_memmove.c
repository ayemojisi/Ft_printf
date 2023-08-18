/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:25:32 by iergun            #+#    #+#             */
/*   Updated: 2022/12/21 03:33:17 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d1, const void *d2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)d1;
	s2 = (char *)d2;
	if (s1 == (NULL) && s2 == (NULL))
		return (NULL);
	if (s2 < s1)
		while (++i <= n)
			s1[n - i] = s2[n - i];
	else
		return (ft_memcpy(d1, d2, n));
	return (s1);
}
