/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:35 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/29 13:44:41 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		size;
	char		*dest;

	size = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	if (dest == NULL)
		return (NULL);
	size = ft_strlcpy(dest, str, size);
	return (dest);
}
