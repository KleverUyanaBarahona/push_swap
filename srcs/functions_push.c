/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:10:37 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/24 19:19:23 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list_n **stack, t_list_n **stack_dest, char c)
{
	if (*stack_dest)
		ft_lstadd_front_int(stack_dest, ft_lstnew_int((*stack)->content));
	else
		*stack_dest = ft_lstnew_int((*stack)->content);
	del_first_node(stack);
	if (c == 'a')
		ft_putstr("pb\n");
	else if (c == 'b')
		ft_putstr("pa\n");
}
