/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_push.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/02 11:53:39 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/15 12:47:50 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//#03 - pa and pb
//Take the first element at the top of b/a and put it at the top of a/b.
//Do nothing if b/a is empty.

void	ft_pa(t_node **stack_b, t_node **stack_a)
{
	t_node	*first_b;

	if (*stack_b || (*stack_b)->next != NULL)
	{
		first_b = *stack_b;
		*stack_b = (*stack_b)->next;
		first_b->next = *stack_a;
		*stack_a = first_b;
	}
	write(1, "pa\n", 3);
}

void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*first_a;

	if (*stack_a || (*stack_a)->next != NULL)
	{
		first_a = *stack_a;
		*stack_a = (*stack_a)->next;
		first_a->next = *stack_b;
		*stack_b = first_a;
	}
	write(1, "pb\n", 3);
}
