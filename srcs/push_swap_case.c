/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:11:31 by klever            #+#    #+#             */
/*   Updated: 2021/09/21 05:17:48 by kbarahon         ###   ########.fr       */
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
	else if (pos_1 > pos_2 && pos_1 < last)
		swap_stack(*stack_a, 'a');
	else if (pos_1 > pos_2 && pos_2 < last)
		rotate(stack_a, 'a');
}

void	push_swap_case_five(t_list_n **stack_a, t_list_n **stack_b)
{
	int		pos;
	void	(**case_swap_len_five)(t_list_n **, t_list_n **);

	pos = 0;
	case_swap_len_five = case_swap();
	while (ft_lstsize_int(*stack_a) > 3)
		push(stack_a, stack_b, 'a');
	push_swap_case_three(stack_a);
	pos = get_pos_stack(*stack_a, (*stack_b)->content);
	(*case_swap_len_five[pos])(stack_a, stack_b);
	pos = get_pos_stack(*stack_a, (*stack_b)->content);
	if (pos == 4)
		pos = 3;
	else if (pos == 2)
		pos = 4;
	else if (pos == 3)
		pos = 2;
	(*case_swap_len_five[pos])(stack_a, stack_b);
	free(case_swap_len_five);
}
