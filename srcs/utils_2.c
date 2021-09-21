/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:03:40 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/21 05:17:05 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putstr(char *str)
{
	ft_putstr_fd(str, 1);
}

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

char	*ft_isspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (&str[i]);
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
