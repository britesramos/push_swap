/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_algorithm.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/04 17:02:54 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/25 18:23:55 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_algorithm(t_node **stack_a, int count)
{
	t_node		*stack_b;
	int			num_a;

	stack_b = NULL;
	num_a = count;
	set_index(stack_a, count);
	while (check_sorted(stack_a) || stack_b != NULL)
	{
		if (!check_sorted(stack_a) && stack_b != NULL)
		{
			num_a = 0;
			num_a = split_qs_b(stack_a, &stack_b, num_a, c_nodes_g(&stack_b));
		}
		if (check_sorted(stack_a) && num_a == 2)
		{
			ft_sa(stack_a);
			num_a = 0;
		}
		if (check_sorted(stack_a) && num_a > 2)
		{
			split_qs_a(stack_a, &stack_b, num_a);
			num_a = num_a / 2;
		}
	}
}
