/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 15:35:07 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/29 13:03:54 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include "./libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct node
{
	int				n;
	int				index;
	bool			indexed;
	int				group;
	struct node		*next;
}	t_node;

int		arg_checker(char **parsed);
int		ft_check_int(char **parsed);
int		ft_check_duplicates(char **parsed);
char	**arg_parser(int argc, char *argv[]);
int		ft_arg_valid(char **parsed);
long	ft_atol(const char *str);

t_node	*ft_create_ll(char **parsed, t_node *stack_a);
t_node	*ft_create_node(int n);

void	ft_free_ll(t_node *head);
void	ft_freesplit(char **parsed);

void	ft_sa(t_node **stack);
void	ft_sb(t_node **stack);
void	ft_swap(t_node **stack);
void	ft_ss(t_node **stack_a, t_node **stack_b);

void	ft_pa(t_node **stack_a, t_node **stack_b);
void	ft_pb(t_node **stack_a, t_node **stack_b);

void	ft_ra(t_node **stack);
void	ft_rb(t_node **stack);
void	ft_reverse(t_node **stack);
void	ft_rr(t_node **stack_a, t_node **stack_b);

void	ft_rra(t_node **stack);
void	ft_rrb(t_node **stack);
void	ft_revrev(t_node **stack);
void	ft_rrr(t_node **stack_a, t_node **stack_b);

int		check_sorted(t_node **stack);
int		check_dif_groups(t_node **stack);

void	sorting_three(t_node **stack_a);
void	sorting_four(t_node **stack_a, t_node *stack_b, int count);
int		counting_arg(t_node **stack_a);
void	sorting(t_node **stack_a);

t_node	*find_pivot(t_node **stack_a, int count);
int		c_nodes(t_node *stack);
void	set_group(t_node **stack_a);
t_node	*find_small(t_node **stack_a);
t_node	*find_bigger(t_node **stack_a);

t_node	*find_smallest(t_node **stack_a);
void	set_index(t_node **stack_a, int max);

void	sorting_algorithm(t_node **stack_a, int count);

int		find_small_ind_a(t_node **stack_a, int num_a);
int		find_big_ind_a(t_node **stack_a, int num_a);
t_node	*find_newpivot_a(t_node **stack_a, int num_a);
void	ft_reverse_a(t_node **stack_a, int count_ra);

void	split_qs_a(t_node **stack_a, t_node **stack_b, int num_a);

int		find_bigger_index_b(t_node **stack_b);
int		find_smaller_index_b(t_node **stack_b);
t_node	*find_newpivot_b(t_node **stack_b);
void	ft_reverse_b(t_node **stack_b, int count_rb);
int		c_nodes_g(t_node **stack_b);

int		split_qs_b(t_node **stack_a, t_node **stack_b, int num_a, int i);

#endif