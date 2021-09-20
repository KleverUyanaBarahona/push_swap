/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:56:16 by klever            #+#    #+#             */
/*   Updated: 2021/09/20 19:38:41 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	del_first_node(t_list_n **stack)
{
	t_list_n	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	free(aux);
}

t_list_n	*ft_lstnew_int(int content)
{
	t_list_n	*list;

	list = (t_list_n *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

t_list_n	*ft_lstlast_int(t_list_n *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back_int(t_list_n **lst, t_list_n *new)
{
	t_list_n	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast_int(*lst);
		temp->next = new;
	}
}

int	ft_lstsize_int(t_list_n *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
