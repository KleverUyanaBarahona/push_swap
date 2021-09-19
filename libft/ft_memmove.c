/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:09:17 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/19 00:42:30 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	char		*dp;
	char const	*sp;

	dp = (char *)dst;
	sp = (const char *)src;
	if (!len || dst == src)
		return (dst);
	else if (dp < sp)
	{
		while (len-- > 0)
			*dp++ = *sp++;
	}
	else
	{
		dp += len;
		sp += len;
		while (len-- > 0)
			*--dp = *--sp;
	}
	return (dst);
}
