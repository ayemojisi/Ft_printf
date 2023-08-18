/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:21:59 by iergun            #+#    #+#             */
/*   Updated: 2023/01/07 04:27:18 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = -1;
	p = (unsigned char *)s;
	while (++i < n)
		if (p[i] == (unsigned char)c)
			return ((unsigned char *)p + i);
	return (NULL);
}
