/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:02:23 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/18 23:29:58 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == c)
			last_pos = (char *)s;
		++s;
	}
	if (last_pos)
		return (last_pos);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
