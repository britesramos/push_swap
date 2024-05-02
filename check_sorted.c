/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_sorted.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 12:27:59 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/23 17:38:23 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	first = *stack;
	second = (*stack)->next;
	while (first->next != NULL)
	{
		if (second->n < first->n)
			return (1);
		else
		{
			first = first->next;
			second = second->next;
		}
	}
	return (0);
}
