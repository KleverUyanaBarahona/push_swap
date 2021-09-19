/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:14:10 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/18 18:40:19 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(void)
{
	printf("Error\n");
	exit(0);
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
