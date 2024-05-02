/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_revrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 16:15:05 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/09 11:55:47 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//#06 - rra and rrb
//Shift down all elements of stack a/b by 1.
//The last element becomes the first one.
void	ft_rra(t_node **stack)
{
	t_node	*last;
	t_node	*secondtl;

	last = *stack;
	secondtl = *stack;
	if (*stack || (*stack)->next != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		while (secondtl->next->next != NULL)
			secondtl = secondtl->next;
		secondtl->next = NULL;
		last->next = *stack;
		*stack = last;
	}
	write(1, "rra\n", 4);
}

void	ft_rrb(t_node **stack)
{
	t_node	*last;
	t_node	*secondtl;

	last = *stack;
	secondtl = *stack;
	if (*stack || (*stack)->next != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		while (secondtl->next->next != NULL)
			secondtl = secondtl->next;
		secondtl->next = NULL;
		last->next = *stack;
		*stack = last;
	}
	write(1, "rrb\n", 4);
}

void	ft_revrev(t_node **stack)
{
	t_node	*last;
	t_node	*secondtl;

	last = *stack;
	secondtl = *stack;
	if (*stack || (*stack)->next != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		while (secondtl->next->next != NULL)
			secondtl = secondtl->next;
		secondtl->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

//#07 - rrr
//rra and rrb at the same time.

void	ft_rrr(t_node **stack_a, t_node **stack_b)
{
	ft_revrev(stack_a);
	ft_revrev(stack_b);
	write(1, "rrr\n", 4);
}
