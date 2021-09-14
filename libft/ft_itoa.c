/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 15:03:50 by kbarahon          #+#    #+#             */
/*   Updated: 2019/12/30 19:39:40 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		tmp;
	int		i;
	int		mod;
	char	*str;

	tmp = n;
	i = 1;
	mod = n < 0;
	while (tmp /= 10)
		i++;
	if (!(str = malloc((i + 1 + mod) * sizeof(char))))
		return (NULL);
	if (mod)
		*str++ = '-';
	str += i;
	*str-- = '\0';
	if (n == 0)
		*str-- = '0';
	while (n)
	{
		*str-- = (n % 10) * (mod ? -1 : 1) + '0';
		n /= 10;
	}
	return (str + 1 - mod);
}
