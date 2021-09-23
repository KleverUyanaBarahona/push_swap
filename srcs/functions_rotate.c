/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:50:25 by klever            #+#    #+#             */
/*   Updated: 2021/09/23 04:07:12 by kbarahon         ###   ########.fr       */
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
	ft_del_lstlast_int(*stack);
	free(aux->next);
	aux->next = NULL;
	if (c == 'a')
		ft_putstr("rra\n");
	if (c == 'b')
		ft_putstr("rrb\n");
}

void	rotate_rr(t_list_n **stack_a, t_list_n **stack_b)
{
	rotate(stack_a, 'r');
	rotate(stack_b, 'r');
	ft_putstr("rr\n");
}

void	reverse_rotate_rr(t_list_n **stack_a, t_list_n **stack_b)
{
	reverse_rotate(stack_a, 'r');
	reverse_rotate(stack_b, 'r');
	printf("rrr\n");
}
