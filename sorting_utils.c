/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 14:58:17 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/29 12:55:57 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_pivot(t_node **stack_a, int count)
{
	t_node	*pivot;

	pivot = *stack_a;
	while (pivot)
	{
		if (pivot->index == (count / 2))
			return (pivot);
		pivot = pivot->next;
	}
	return (pivot);
}

int	c_nodes(t_node *stack)
{
	t_node	*current;
	int		count;

	current = stack;
	count = 0;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

void	set_group(t_node **stack_a)
{
	t_node	*current;
	int		i;

	current = *stack_a;
	i = 0;
	while (current)
	{
		current->group = i;
		current = current->next;
		i++;
	}
}

t_node	*find_small(t_node **stack_a)
{
	t_node	*smallest;
	t_node	*current;

	smallest = *stack_a;
	current = (*stack_a)->next;
	while (current)
	{
		if (current->n < smallest->n)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}

t_node	*find_bigger(t_node **stack_a)
{
	t_node	*temp;
	t_node	*bigger;

	temp = *stack_a;
	bigger = *stack_a;
	while (temp)
	{
		if (temp->n > bigger->n)
			bigger = temp;
		temp = temp->next;
	}
	return (bigger);
}
