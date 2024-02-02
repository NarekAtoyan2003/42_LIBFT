/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:32:41 by naatoyan          #+#    #+#             */
/*   Updated: 2024/02/02 20:37:46 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	if_ovrflo(long nb, char c)
{
	if (((nb * 10) + (c + '0')) < 0)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		neg;
	int		i;
	long	nb;

	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str [i] == ' ')
		++i;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = -1;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	nb = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (!if_ovrflo(nb, str[i]))
			return (-1);
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		++i;
	}
	nb = nb * neg;
	return (nb);
}
