/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:12:01 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/23 21:48:04 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l_src;
	size_t	l_dst;

	if (!dst && !dstsize)
		return (0);
	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (dstsize <= l_dst)
		return (dstsize + l_src);
	i = 0;
	while ((i < dstsize) && dst[i])
		i++;
	j = 0;
	while (src[j] && (i < dstsize - 1))
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (l_src + l_dst);
}
