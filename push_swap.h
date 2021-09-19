/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:05:52 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/18 18:57:28 by klever           ###   ########.fr       */
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

/*
typedef struct t_pila
{
	void *conten;
	struct t_pila *next;
}		t_pila;
*/
int		ft_cmp_p_n(char *str);
char	*ft_isspace(char *str);

void	del_first_node(t_list **stack);
int		dup_number(t_list *stack, int number);
char	**check_number_argv(char *argv);
void	print_error(void);
int		fill_stack(t_list	**stack_a, char **str);
int		ft_atoi_check(const char *str);

#endif