/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/26 15:33:01 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/26 20:46:19 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**parsed;
	t_node	*stack_a;

	parsed = NULL;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (argc >= 2)
		parsed = arg_parser(argc, argv);
	if (arg_checker(parsed))
	{
		write(2, "Error\n", 6);
		if (argc == 2 && ft_strchr(argv[1], ' '))
			ft_freesplit(parsed);
		return (0);
	}
	stack_a = ft_create_ll(parsed, stack_a);
	if (check_sorted(&stack_a))
		sorting(&stack_a);
	if (argc == 2 && ft_strchr(argv[1], ' '))
		ft_freesplit(parsed);
	ft_free_ll(stack_a);
	return (0);
}
