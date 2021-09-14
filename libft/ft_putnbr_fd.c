/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 20:26:43 by kbarahon          #+#    #+#             */
/*   Updated: 2019/12/30 19:48:57 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			c;

	i = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		i = n * -1;
	}
	else
		i = n;
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	c = (i % 10 + 48);
	write(fd, &c, 1);
}
