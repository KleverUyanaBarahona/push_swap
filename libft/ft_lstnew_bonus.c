/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 17:19:26 by kbarahon          #+#    #+#             */
/*   Updated: 2020/01/02 21:50:53 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *newlist;

	if (!(newlist = malloc(sizeof(t_list))))
		return (0);
	if (!(newlist->content = malloc(sizeof(content))))
		return (0);
	newlist->content = (void *)content;
	newlist->next = NULL;
	return (newlist);
}
