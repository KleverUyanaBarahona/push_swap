/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarahon <kbarahon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:05:52 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/19 21:06:25 by kbarahon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include    "./libft/libft.h"
# include    "./gnl/get_next_line_bonus.h"
# include    <stdio.h>
# include    <stdlib.h>

typedef struct s_var_split
{
	char	**num;
	int		i;
	int		j;
	int		flag;
}				t_var_split;

typedef struct s_var
{
	int		iter;
	int		hold;
	int		len_stack;
	int		len_b;
	int		flag;
}				t_var;

typedef struct s_list_n
{
	int				content;
	struct s_list_n	*next;
}				t_list_n;

void		ft_lstadd_back_int(t_list_n **lst, t_list_n *new);
t_list_n	*ft_lstnew_int(int content);
int			ft_cmp_p_n(char *str);
char		*ft_isspace(char *str);
int			ft_lstsize_int(t_list_n *lst);

int			check_a(t_list_n *stack, int len);
void		del_first_node(t_list_n **stack);
int			dup_number(t_list_n *stack, int number);
char		**check_number_argv(char *argv);
void		print_error(void);
int			fill_stack(t_list_n	**stack_a, char **str);
int			ft_atoi_check(const char *str);

#endif