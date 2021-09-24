/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:03:40 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/24 19:41:59 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front_int(t_list_n **alst, t_list_n *new)
{
	if (alst == NULL || new == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}

int	get_pos_stack(t_list_n *stack_a, int content_b)
{
	int	pos;

	pos = 0;
	while (stack_a)
	{
		if (stack_a->content < content_b)
			pos++;
		stack_a = stack_a->next;
	}
	return (pos);
}

int	check_a(t_list_n *stack, int len)
{
	int	len_start;

	len_start = ft_lstsize_int(stack);
	while (stack->next)
	{
		if (stack->content < stack->next->content)
			stack = stack->next;
		else
			return (0);
	}
	if (len == len_start)
		return (1);
	else
		return (0);
}

int	ft_cmp_p_n(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag++;
		i++;
	}
	if (flag % 2 == 0)
		return (1);
	return (-1);
}
