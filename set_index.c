/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_index.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/11 15:03:39 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/26 20:42:46 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_smallest(t_node **stack_a)
{
	t_node	*smallest;
	t_node	*current;

	smallest = *stack_a;
	current = *stack_a;
	while (current)
	{
		if (smallest->indexed == true)
			smallest = smallest->next;
		if (current->n < smallest->n && current->indexed == false
			&& smallest->indexed == false)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}

void	set_index(t_node **stack_a, int max)
{
	t_node	*smallest;
	t_node	*current;
	int		i;

	current = *stack_a;
	i = 0;
	while (i < max)
	{
		smallest = find_smallest(stack_a);
		smallest->indexed = true;
		smallest->index = i;
		i++;
	}
}
