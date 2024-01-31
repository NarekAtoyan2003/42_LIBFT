/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:37:52 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/12 21:43:30 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*c_p;
	unsigned int	ch;
	size_t			i;

	c_p = (char *)b;
	i = 0;
	ch = (unsigned char)c;
	while (i < len)
	{
		c_p[i] = ch;
		i++;
	}
	return (b);
}
