/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:13:36 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/28 22:30:30 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ptr_to_first;

	if (!lst || !f || !del)
		return (0);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (0);
	ptr_to_first = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!new_lst)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&ptr_to_first, new_lst);
		lst = lst->next;
	}
	return (ptr_to_first);
}
