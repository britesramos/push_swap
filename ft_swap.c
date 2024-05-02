/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/02 11:52:39 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/09 11:57:36 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//#01 - sa and sb
//Swap the first 2 elements at the top of a stack.
//Do nothing if there is only one or no elements.

void	ft_sa(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (*stack && (*stack)->next != NULL)
	{
		first = *stack;
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		*stack = second;
	}
	write(1, "sa\n", 3);
}

void	ft_sb(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (*stack && (*stack)->next != NULL)
	{
		first = *stack;
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		*stack = second;
	}
	write(1, "sb\n", 3);
}

void	ft_swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (*stack && (*stack)->next != NULL)
	{
		first = *stack;
		second = (*stack)->next;
		first->next = second->next;
		second->next = first;
		*stack = second;
	}
}
//I NEED TO WRITE WHAT EACH FUNCTION DOES SOMEWHERE!

//#02 - ss
//sa and sb at the same time.

void	ft_ss(t_node **stack_a, t_node **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1, "ss\n", 3);
}
