/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:48:03 by naatoyan          #+#    #+#             */
/*   Updated: 2024/02/01 20:05:33 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char	*s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (i)
				i = 0;
		}
		else
		{
			if (!i)
			{
				i = 1;
				count++;
			}
		}
		s++;
	}
	return (count);
}

char	*splitr(char **s, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[0][i] && s[0][i] == c)
		i++;
	s[0] += i;
	i = 0;
	while (s[0][i] && s[0][i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (00);
	i = 0;
	while (s[0][i] && s[0][i] != c)
	{
		dest[i] = s[0][i];
		i++;
	}
	dest[i] = '\0';
	s[0] += i;
	return (dest);
}

int	if_null(char **dest, int i)
{
	if (!dest[i])
	{
		while (i >= 0)
		{
			free(dest[i]);
			i--;
		}
		free(dest);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		w_c;
	char	*str;
	char	**dest;

	if (!s)
		return (00);
	str = (char *)s;
	w_c = word_count(str, c);
	dest = (char **)malloc(sizeof(char *) * (w_c + 1));
	if (!dest)
		return (00);
	i = 0;
	while (i < w_c)
	{
		dest[i] = splitr(&str, c);
		if (if_null(dest, i))
			return (00);
		i++;
	}
	dest[i] = 00;
	return (dest);
}
/*
int	main()
{
	char	**a;

	a = ft_split("   bdbd   dwehfjhwd   dfwjdb ",' ');
}
*/
