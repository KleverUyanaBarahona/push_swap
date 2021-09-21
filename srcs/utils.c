/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:56:16 by klever            #+#    #+#             */
/*   Updated: 2021/09/21 04:20:46 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	del_first_node(t_list_n **stack)
{
	t_list_n	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	free(aux);
}

void	ft_del_lstlast_int(t_list_n *lst)
{
	t_list_n *aux;

	if (!lst)
		return ;
	if(ft_lstsize_int(lst) > 2)
	{	
		aux = lst;
		while (((aux)->next)->next != NULL)
			aux = aux->next;
		free(aux->next);
		aux->next = NULL;
	}
	else if (ft_lstsize_int(lst) == 2)
		lst->next = NULL;
	else if (ft_lstsize_int(lst) == 1)
		lst = NULL;	
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
