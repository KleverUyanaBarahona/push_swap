/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:42:17 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/14 22:14:46 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	is_neg_pos(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

char	**check_number_argv(char *argv)
{
	t_var_split	var;

	var.i = 0;
	var.num = ft_split(argv, ' ');
	while (var.num[var.i])
	{
		var.flag = 0;
		var.j = 0;
		while (var.num[var.i][var.j])
		{
			if (ft_isdigit(var.num[var.i][var.j]) ||
				is_neg_pos(var.num[var.i][var.j]))
			{
				if (ft_isdigit(var.num[var.i][var.j]))
					var.flag = 1;
				if (var.flag == 1 && is_neg_pos(var.num[var.i][var.j]))
					print_error();
			}
			else
				print_error();
			var.j++;
		}
		var.i++;
	}
	return (var.num);
}
