/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 02:23:20 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/18 19:01:12 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	*ft_position(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	return (&str[i]);
}

static void	is_int(long num)
{
	if (num < -2147483648 || num > 2147483647)
		print_error();
}

int	ft_atoi_check(const char *str)
{
	char		*ptr;
	int			i;
	int			j;
	int			nb;
	long		plus;

	i = 0;
	ptr = ft_position(ft_isspace((char *)str));
	if (ptr[0] < '0' || ptr[0] > '9')
		return (0);
	j = 0;
	while (ptr[j] >= '0' && ptr[j] <= '9')
		j++;
	plus = 0;
	while (i < j)
	{
		nb = ptr[i] - '0';
		plus += nb;
		if (i < j - 1)
			plus *= 10;
		i++;
	}
	plus *= ft_cmp_p_n(ft_isspace((char *)str));
	is_int(plus);
	return (plus);
}
