/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 19:50:33 by kbarahon          #+#    #+#             */
/*   Updated: 2019/12/30 23:02:07 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] && s1[i] == s2[i] && (i < n - 1))
		i++;
	if (n)
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	return (0);
}
