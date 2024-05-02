/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_qs_a.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/15 17:34:46 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/29 12:53:29 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_qs_a(t_node **stack_a, t_node **stack_b, int num_a)
{
	int		i;
	int		count_ra;
	t_node	*pivot;

	i = 0;
	count_ra = 0;
	pivot = find_newpivot_a(stack_a, num_a);
	while (i != num_a)
	{
		if ((*stack_a)->index <= pivot->index)
		{
			ft_pb(stack_a, stack_b);
			(*stack_b)->group = num_a / 2;
		}
		else if (check_sorted(stack_a) && (*stack_a)->index > pivot->index
			&& c_nodes(*stack_a) > 1)
		{
			ft_ra(stack_a);
			count_ra++;
		}
		i++;
	}
	if (c_nodes(*stack_a) > 1 && check_dif_groups(stack_a) == 1)
		ft_reverse_a(stack_a, count_ra);
}
