/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_qs_a_utils.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 16:45:31 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/25 16:49:49 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_big_ind_a(t_node **stack_a, int num_a)
{
	t_node	*bigger;
	t_node	*current;
	int		i;

	i = 0;
	bigger = *stack_a;
	current = (*stack_a)->next;
	while (i < num_a && current)
	{
		if (current->index > bigger->index)
			bigger = current;
		current = current->next;
		i++;
	}
	return (bigger->index);
}

int	find_small_ind_a(t_node **stack_a, int num_a)
{
	t_node	*smaller;
	t_node	*current;
	int		i;

	i = 0;
	smaller = *stack_a;
	current = (*stack_a)->next;
	while (i < num_a && current)
	{
		if (current->index < smaller->index)
			smaller = current;
		current = current->next;
		i++;
	}
	return (smaller->index);
}

t_node	*find_newpivot_a(t_node **stack_a, int num_a)
{
	int		pivind;
	t_node	*pivot;

	pivind = 0;
	pivind = find_small_ind_a(stack_a, num_a) + find_big_ind_a(stack_a, num_a);
	pivot = find_pivot(stack_a, pivind);
	return (pivot);
}

void	ft_reverse_a(t_node **stack_a, int count_ra)
{
	while (count_ra > 0)
	{
		ft_rra(stack_a);
		count_ra--;
	}
}
