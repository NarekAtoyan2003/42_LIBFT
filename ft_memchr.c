/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:26:48 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/12 21:30:55 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	char			ch;
	unsigned int	i;

	str = (char *) s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (0);
}
