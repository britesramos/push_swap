/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_reverse.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/02 11:54:19 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/09 11:54:28 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//I NEED TO WRITE WHAT EACH FUNCTION DOES SOMEWHERE!

//#04 - ra and rb
//Shift up all elements of stack a/b by 1.
//The first element becomes the last one.

void	ft_ra(t_node **stack)
{
	t_node	*last;
	t_node	*second;

	if (*stack || (*stack)->next != NULL)
	{
		second = (*stack)->next;
		last = *stack;
		while (last->next != NULL)
			last = last-> next;
		last->next = *stack;
		(*stack)->next = NULL;
		*stack = second;
	}
	write(1, "ra\n", 3);
}

void	ft_rb(t_node **stack)
{
	t_node	*last;
	t_node	*second;

	if (*stack || (*stack)->next != NULL)
	{
		second = (*stack)->next;
		last = *stack;
		while (last->next != NULL)
			last = last-> next;
		last->next = *stack;
		(*stack)->next = NULL;
		*stack = second;
	}
	write(1, "rb\n", 3);
}

void	ft_reverse(t_node **stack)
{
	t_node	*last;
	t_node	*second;

	if (*stack || (*stack)->next != NULL)
	{
		second = (*stack)->next;
		last = *stack;
		while (last->next != NULL)
			last = last-> next;
		last->next = *stack;
		(*stack)->next = NULL;
		*stack = second;
	}
}

//#05 - rr
//ra and rb at the same time.

void	ft_rr(t_node **stack_a, t_node **stack_b)
{
	ft_reverse(stack_a);
	ft_reverse(stack_b);
	write(1, "rr\n", 3);
}
