/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:47:51 by kbarahon          #+#    #+#             */
/*   Updated: 2020/01/03 17:47:35 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = (char*)b;
	i = 0;
	while (i != len)
	{
		p[i] = c;
		++i;
	}
	return (b);
}
