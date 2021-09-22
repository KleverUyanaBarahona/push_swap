/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 05:12:54 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/22 05:35:30 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*fill_array_int(t_list_n *stack)
{
	int	*array;
	int	len_stack;
	int	i;

	len_stack = ft_lstsize_int(stack);
	i = 0;
	array = (int *)malloc(len_stack * sizeof(int));
	if (!array)
		return (NULL);
	while (stack)
	{
		array[i] = (int)stack->content;
		stack = stack->next;
		i++;
	}
	return (array);
}

void	ft_sort_array(int *tab, int size)
{
	int	i;
	int	pos;
	int	cut;
	int	min;

	pos = 0;
	i = 0;
	while (i < size)
	{
		min = i;
		pos = i + 1;
		while (pos < size)
		{
			if (tab[pos] < tab[min])
			{
				min = pos;
			}
			pos++;
		}
		cut = tab[i];
		tab[i] = tab[min];
		tab[min] = cut;
		i++;
	}
}
