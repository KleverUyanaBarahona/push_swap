/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 18:35:16 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/18 19:36:26 by klever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	e;

	i = 0;
	if (s2[0] == '\0' || s2 == NULL)
		return ((char *) s1);
	while (s1[i] != '\0' && i < len)
	{
		e = 0;
		if (s1[i] == s2[e])
		{
			while (s1[i + e] == s2[e])
			{
				if (!s2[e + 1] && (i + e) < len)
					return ((char *) s1 + i);
				e++;
			}
		}
		i++;
	}
	return (NULL);
}
