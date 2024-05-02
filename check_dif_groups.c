/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_dif_groups.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 18:57:05 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/23 17:37:55 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dif_groups(t_node **stack)
{
	t_node	*current;
	t_node	*next;
	int		i;

	current = *stack;
	next = (*stack)->next;
	i = 0;
	while (next)
	{
		if (next->group != current->group)
			return (1);
		next = next->next;
	}
	return (0);
}
