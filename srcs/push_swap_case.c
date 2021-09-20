/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:11:31 by klever            #+#    #+#             */
/*   Updated: 2021/09/20 20:54:24 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap_case_three(t_list_n **stack_a)
{
	int	pos_1;
	int	pos_2;
	int	last;

	pos_1 = (*stack_a)->content;
	pos_2 = (*stack_a)->next->content;
	last = ft_lstlast_int(*stack_a)->content;
	if (pos_1 > pos_2 && pos_2 > last)
	{
		rotate(stack_a, 'a');
		swap_stack(*stack_a, 'a');
	}
	else if (pos_2 > last && pos_1 < last)
	{
		swap_stack(*stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if (last < pos_2 && pos_1 < pos_2)
		reverse_rotate(stack_a, 'a');
//	else if (pos_1 > pos_2 && pos_1 < last)
//		swap_stack(*stack_a, 'a');
//	else if (pos_1 > pos_2 && pos_2 < last)
//		rotate(stack_a, 'a');
}
