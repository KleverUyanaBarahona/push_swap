/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:50:25 by klever            #+#    #+#             */
/*   Updated: 2021/09/20 20:54:26 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list_n **stack, char c)
{
	t_list_n	*aux;

	aux = *stack;
	ft_lstadd_back_int(stack, ft_lstnew_int((*stack)->content));
	del_first_node(stack);
	if (c == 'a')
		ft_putstr("ra\n");
	if (c == 'b')
		ft_putstr("rb\n");
}

void	reverse_rotate(t_list_n **stack, char c)
{
	t_list_n	*aux;

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	ft_lstadd_front_int(stack, ft_lstnew_int(aux->next->content));
	free(aux->next);
	aux->next = NULL;
	if (c == 'a')
		printf("rra\n");
	if (c == 'b')
		printf("rrb\n");
}
