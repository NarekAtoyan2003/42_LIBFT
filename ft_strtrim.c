/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:48:32 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/29 21:14:28 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_string(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && is_in_string(s1[j], set))
		j++;
	k = ft_strlen((char *) s1);
	while (k > j && is_in_string(s1[k - 1], set))
		k--;
	dest = (char *)malloc (sizeof(*s1) * (k - j + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (j < k)
		dest[i++] = s1[j++];
	dest[i] = 0;
	return ((char *)dest);
}
