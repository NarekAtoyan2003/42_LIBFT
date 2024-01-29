/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:49:57 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/24 21:06:30 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	i;

	dest = (char *)dst;
	srce = (char *)src;
	i = 0;
	while ((dst != NULL || src != NULL) && i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}
