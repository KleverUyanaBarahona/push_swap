/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:08:33 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/22 05:21:43 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_zero(t_list_n **stack_a, t_list_n **stack_b)
{
	push(stack_b, stack_a, 'b');
}

void	case_one(t_list_n **stack_a, t_list_n **stack_b)
{
	push(stack_b, stack_a, 'b');
	swap_stack(*stack_a, 'a');
}

void	case_two(t_list_n **stack_a, t_list_n **stack_b)
{
	reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	rotate(stack_a, 'a');
	rotate(stack_a, 'a');
}

void	case_three(t_list_n **stack_a, t_list_n **stack_b)
{
	push(stack_b, stack_a, 'b');
	rotate(stack_a, 'a');
}

void	case_four(t_list_n **stack_a, t_list_n **stack_b)
{
	rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	swap_stack(*stack_a, 'a');
	reverse_rotate(stack_a, 'a');
}
