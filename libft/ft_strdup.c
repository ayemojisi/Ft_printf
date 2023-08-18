/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:48:26 by iergun            #+#    #+#             */
/*   Updated: 2022/12/22 20:49:03 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *d1)
{
	char	*s1;
	size_t	i;

	i = ft_strlen(d1);
	s1 = malloc(sizeof(char) * (i + 1));
	if (!s1)
		return (0);
	ft_strlcpy(s1, d1, i + 1);
	return (s1);
}
