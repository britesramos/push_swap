/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_qs_b_utils.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 16:37:59 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/25 18:44:21 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_bigger_index_b(t_node **stack_b)
{
	int		chunk;
	t_node	*current;
	t_node	*bigger;

	chunk = (*stack_b)->group;
	current = (*stack_b)->next;
	bigger = *stack_b;
	while (current && current->group == chunk)
	{
		if (current->index > bigger->index)
			bigger = current;
		current = current->next;
	}
	return (bigger->index);
}

int	find_smaller_index_b(t_node **stack_b)
{
	int		chunk;
	t_node	*current;
	t_node	*smaller;

	chunk = (*stack_b)->group;
	current = (*stack_b)->next;
	smaller = *stack_b;
	while (current && current->group == chunk)
	{
		if (current->index < smaller->index)
			smaller = current;
		current = current->next;
	}
	return (smaller->index);
}

t_node	*find_newpivot_b(t_node **stack_b)
{
	int		pivind;
	t_node	*pivot;

	pivind = 0;
	pivind = find_smaller_index_b(stack_b) + find_bigger_index_b(stack_b);
	pivot = find_pivot(stack_b, pivind);
	return (pivot);
}

void	ft_reverse_b(t_node **stack_b, int count_rb)
{
	while (count_rb > 0)
	{
		ft_rrb(stack_b);
		count_rb--;
	}
}

int	c_nodes_g(t_node **stack_b)
{
	int		i;
	int		chunk;
	t_node	*current;

	i = 0;
	current = *stack_b;
	chunk = (*stack_b)->group;
	while (current && current->group == chunk)
	{
		current = current->next;
		i++;
	}
	i--;
	return (i);
}
