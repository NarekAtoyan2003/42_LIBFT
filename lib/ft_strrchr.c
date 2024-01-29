/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:14:40 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/12 21:19:13 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		len;

	len = ft_strlen(s);
	ch = (unsigned char)c;
	while (len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(s + len));
		--len;
	}
	return (0);
}
