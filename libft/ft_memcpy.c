/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:59:08 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/19 00:41:49 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (!n || dst == src)
		return (dst);
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
