/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 20:51:08 by kbarahon          #+#    #+#             */
/*   Updated: 2019/12/30 19:07:23 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	char	*p;
	int		c;
	size_t	i;

	ret = malloc(size * count);
	p = (char*)ret;
	c = 0;
	i = 0;
	if (ret)
		while (i != size * count)
		{
			p[i] = c;
			++i;
		}
	return (ret);
}
