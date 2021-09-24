/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klever <klever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:05:52 by kbarahon          #+#    #+#             */
/*   Updated: 2021/09/24 18:50:51 by klever           ###   ########.fr       */
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
/*utils*/
void		ft_del_lstlast_int(t_list_n *lst);
void		ft_putstr(char *str);
void		ft_lstadd_back_int(t_list_n **lst, t_list_n *new);
void		ft_lstadd_front_int(t_list_n **alst, t_list_n *new);
t_list_n	*ft_lstnew_int(int content);
int			ft_cmp_p_n(char *str);
char		*ft_isspace(char *str);
int			ft_lstsize_int(t_list_n *lst);
t_list_n	*ft_lstlast_int(t_list_n *lst);
/*push_swap*/
int			get_iterative(int hold, int len_stack);
int			get_max_content(t_list_n *stack);
void		iter_push(t_list_n **stack_a, t_list_n **stack_b,
				t_var *var, int *s_array);
void		push_stack_a(t_list_n **stack_a, t_list_n **stack_b);
void		swap_ss(t_list_n *stack_a, t_list_n *stack_b);
void		rotate_rr(t_list_n **stack_a, t_list_n **stack_b);
void		push_hundred(t_list_n **stk_a, t_list_n **stk_b,
				int len, int *s_array);
void		ft_sort_array(int *tab, int size);
int			*fill_array_int(t_list_n *stack);
int			get_pos_stack(t_list_n *stack_a, int content_b);
void		push(t_list_n **stack, t_list_n **stack_dest, char c);
void		case_zero(t_list_n **stack_a, t_list_n **stack_b);
void		case_one(t_list_n **stack_a, t_list_n **stack_b);
void		case_two(t_list_n **stack_a, t_list_n **stack_b);
void		case_three(t_list_n **stack_a, t_list_n **stack_b);
void		case_four(t_list_n **stack_a, t_list_n **stack_b);
void		*case_swap(void);
void		push_swap_case_four(t_list_n **stack_a, t_list_n **stack_b);
void		push_swap_case_three(t_list_n **stack_a);
void		push_swap_case_five(t_list_n **stack_a, t_list_n **stack_b);
void		reverse_rotate(t_list_n **stack, char c);
void		rotate(t_list_n **stack, char c);
void		ft_swap(int *content_a, int *content_b, char c);
void		swap_stack(t_list_n *stack, char c);
int			check_a(t_list_n *stack, int len);
/*check_args*/
void		del_first_node(t_list_n **stack);
int			dup_number(t_list_n *stack, int number);
char		**check_number_argv(char *argv);
void		print_error(void);
int			fill_stack(t_list_n	**stack_a, char **str);
int			ft_atoi_check(const char *str);

#endif