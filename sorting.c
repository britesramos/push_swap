/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 12:41:19 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/29 12:55:51 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_three(t_node **stack_a)
{
	t_node	*bigger;
	t_node	*first;
	t_node	*second;

	bigger = find_bigger(stack_a);
	first = *stack_a;
	second = (*stack_a)->next;
	if (first->n == bigger->n)
	{
		ft_reverse(stack_a);
		write(1, "ra\n", 3);
	}
	else if (second->n == bigger->n)
	{
		ft_revrev(stack_a);
		write(1, "rra\n", 4);
	}
	if (check_sorted(stack_a) == 1)
	{
		ft_swap(stack_a);
		write(1, "sa\n", 3);
	}
}

void	sorting_four(t_node **stack_a, t_node *stack_b, int count)
{
	t_node	*smallest;

	set_index(stack_a, count);
	smallest = find_small(stack_a);
	set_group(stack_a);
	if (smallest->group == 0)
		ft_pb(stack_a, &stack_b);
	else if (smallest->group == 1)
	{
		ft_sa(stack_a);
		ft_pb(stack_a, &stack_b);
	}
	else if (smallest->group == 2)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_pb(stack_a, &stack_b);
	}
	else if (smallest->group == 3)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, &stack_b);
	}
	sorting_three(stack_a);
	ft_pa(stack_a, &stack_b);
}

int	counting_arg(t_node **stack_a)
{
	int		count;
	t_node	*temp;

	count = 1;
	temp = *stack_a;
	while ((temp)->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

void	sorting(t_node **stack_a)
{
	int		count;
	t_node	*stack_b;

	count = 0;
	stack_b = NULL;
	count = counting_arg(stack_a);
	if (count == 2)
	{
		ft_swap(stack_a);
		write(1, "sa\n", 3);
	}
	if (count == 3)
		sorting_three(stack_a);
	if (count == 4)
		sorting_four(stack_a, stack_b, count);
	if (count > 4)
		sorting_algorithm(stack_a, count);
}
