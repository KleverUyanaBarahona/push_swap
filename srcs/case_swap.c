/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:06:02 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/22 05:21:40 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*case_swap(void)
{
	void	(**ptr_func)(t_list_n **, t_list_n **);

	ptr_func = malloc(sizeof(*ptr_func) * 5);
	ptr_func[0] = &case_zero;
	ptr_func[1] = &case_one;
	ptr_func[2] = &case_two;
	ptr_func[3] = &case_three;
	ptr_func[4] = &case_four;
	return (ptr_func);
}
