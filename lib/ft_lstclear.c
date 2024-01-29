/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:04:32 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/28 22:27:40 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		tmp = node->next;
		del(node->content);
		free(node);
		node = tmp;
	}
	*lst = 0;
}
