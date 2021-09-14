/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 19:26:14 by kbarahon          #+#    #+#             */
/*   Updated: 2019/12/30 19:07:30 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	result;
	int			i;
	int			count;
	int			sign;

	result = 0;
	i = 0;
	count = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (ft_isdigit(str[i + count]))
	{
		result = result * 10 + str[i + count] - '0';
		count++;
	}
	if (count > 18 && sign > 0)
		return (-1);
	if (count > 18 && sign < 0)
		return (0);
	return (sign * result);
}
