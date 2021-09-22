/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_case_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:31:37 by klever            #+#    #+#             */
/*   Updated: 2021/09/22 20:40:34 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_hundred(t_list_n **stk_a, t_list_n **stk_b, int len, int *s_array)
{
	int	i;
	int	block_inc;
	int	pivote_a;

	//block_inc = len_block(len);
	i = block_inc;
	pivote_a = s_array[i];
	while (ft_lstsize_int(*stk_a) > 0)
	{
		while (ft_lstsize_int(*stk_b) < i)
		{
			//if (pivote_a > (*stk_a)->content || i == len)
			//	push_min(stk_a, stk_b, s_array, i);
			//else
			//	rotate_max(stk_a, stk_b, s_array, i);
		}
		i += block_inc;
		if (i < len)
			pivote_a = s_array[i];
		else
		{
			pivote_a = s_array[len - 1];
			i = len;
		}
	}
}
