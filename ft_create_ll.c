/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_ll.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/25 11:06:33 by sramos        #+#    #+#                 */
/*   Updated: 2024/05/02 17:54:33 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_create_node(int n)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
	{
		//Missing free function to free already allocated nodes in case it fails.
		write (1, "Memory allocation failed!\n", 26);
		exit (1);
	}
	node->n = n;
	node->indexed = false;
	node->group = 0;
	node->next = NULL;
	return (node);
}

t_node	*ft_create_ll(char **parsed, t_node *stack_a)
{
	int		i;
	int		n;
	t_node	*newnode;
	t_node	*current;

	i = 0;
	n = 0;
	current = NULL;
	while (parsed[i] != NULL)
	{
		n = ft_atoi(parsed[i]);
		newnode = ft_create_node(n);
		if (stack_a == NULL)
		{
			stack_a = newnode;
			current = stack_a;
		}
		else
		{
			current->next = newnode;
			current = current->next;
		}
		i++;
	}
	return (stack_a);
}
