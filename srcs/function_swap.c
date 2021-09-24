/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:23:43 by klever            #+#    #+#             */
/*   Updated: 2021/09/24 19:14:17 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *content_a, int *content_b, char c)
{
	int	content;

	content = *content_a;
	*content_a = *content_b;
	*content_b = content;
	if (c == 'a')
		ft_putstr("sa\n");
	else if (c == 'b')
		ft_putstr("sb\n");
	else if (c == 'x')
		ft_putstr("ss\n");
}

void	swap_stack(t_list_n *stack, char c)
{
	if (stack->next)
	{
		ft_swap(&stack->content, &stack->next->content, c);
	}
}

void	swap_ss(t_list_n *stack_a, t_list_n *stack_b)
{
	ft_swap(&stack_a->content, &stack_a->next->content, 'x');
	ft_swap(&stack_b->content, &stack_b->next->content, ' ');
}
