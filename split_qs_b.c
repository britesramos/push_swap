/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_qs_b.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/15 17:23:56 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/29 12:53:14 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_qs_b(t_node **stack_a, t_node **stack_b, int num_a, int i)
{
	int		j;
	int		count_rb;
	t_node	*pivot;

	j = 0;
	count_rb = 0;
	pivot = find_newpivot_b(stack_b);
	while (j <= i)
	{
		if ((*stack_b)->index >= pivot->index)
		{
			ft_pa(stack_b, stack_a);
			num_a++;
		}
		else if ((*stack_b)->index < pivot->index && i > 1
			&& (*stack_b)->next != NULL)
		{
			ft_rb(stack_b);
			count_rb++;
		}
		j++;
	}
	if (c_nodes(*stack_b) > 1 && check_dif_groups(stack_b) == 1)
		ft_reverse_b(stack_b, count_rb);
	return (num_a);
}
