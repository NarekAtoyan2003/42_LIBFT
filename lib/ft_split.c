/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:39:05 by dpetrosy          #+#    #+#             */
/*   Updated: 2024/01/28 22:18:15 by naatoyan         ###   ########.fr       */
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
