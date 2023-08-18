/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:22:47 by iergun            #+#    #+#             */
/*   Updated: 2023/01/06 17:26:11 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < len)
	len = ft_strlen(s);
	size = ft_strlen((char *)s);
	if (start > size)
		return (ft_strdup(""));
	if (size - start < len)
		ret = (char *)malloc((size - start + 1) * sizeof(char));
	else
		ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
