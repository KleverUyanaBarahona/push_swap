/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:40:11 by klever            #+#    #+#             */
/*   Updated: 2021/09/24 19:41:55 by klever           ###   ########.fr       */
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

void	ft_del_lstlast_int(t_list_n *lst)
{
	t_list_n	*aux;

	if (!lst)
		return ;
	if (ft_lstsize_int(lst) > 2)
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
