/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 12:12:35 by kbarahon          #+#    #+#             */
/*   Updated: 2019/12/30 19:07:04 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*src2;
	char			*ptr;

	dest = (char *)dst;
	src2 = (char *)src;
	i = 0;
	ptr = 0;
	while (i < n && ptr == 0)
	{
		dest[i] = src2[i];
		if (src2[i] == ((char)c))
			ptr = dest + i + 1;
		i++;
	}
	return (ptr);
}
