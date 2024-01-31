/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:37:28 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/29 13:37:29 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sim_count(long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*get_str(long n, int count, char *dest)
{
	dest[count--] = '\0';
	while (n > 0)
	{
		dest[count] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (dest);
}

char	*if_zerro(char *z)
{
	z[0] = '0';
	z[1] = '\0';
	return (z);
}

char	*ft_itoa(int n)
{
	long	num;
	int		count;
	char	*dest;

	num = n;
	count = 0;
	if (n < 0)
	{
		num = -num;
		count = 1;
	}
	count = count + sim_count(num);
	if (n == 0)
		count = 1;
	dest = (char *)malloc((count + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest = get_str(num, count, dest);
	if (n < 0)
		dest[0] = '-';
	if (n == 0)
		dest = if_zerro(dest);
	return (dest);
}
