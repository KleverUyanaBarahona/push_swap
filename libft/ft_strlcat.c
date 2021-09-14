/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:19:04 by kbarahon          #+#    #+#             */
/*   Updated: 2020/01/02 20:36:35 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t x;
	size_t idst;

	x = 0;
	i = 0;
	idst = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[x] != '\0' && i < size - 1)
		dest[i++] = src[x++];
	if (size != 0 && size >= idst)
		dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + idst);
}
