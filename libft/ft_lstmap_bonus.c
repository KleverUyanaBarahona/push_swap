/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 21:23:29 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/19 00:46:23 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_n;
	t_list	*ele_n;

	if (!f || !lst)
		return (NULL);
	list_n = NULL;
	while (lst)
	{
		ele_n = ft_lstnew(f(lst->content));
		if (!ele_n)
		{
			ft_lstclear(&list_n, del);
		}
		ft_lstadd_back(&list_n, ele_n);
		lst = lst->next;
	}
	return (list_n);
}
