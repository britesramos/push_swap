/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/26 12:12:31 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/02 12:04:07 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_ll(t_node *head)
{
	t_node	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}

void	ft_freesplit(char **parsed)
{
	int	len;

	len = 0;
	while (parsed[len] != NULL)
		len++;
	len--;
	while (len >= 0)
	{
		free(parsed[len]);
		len--;
	}
	free(parsed);
}
