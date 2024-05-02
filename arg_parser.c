/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   arg_parser.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/08 11:58:46 by sramos        #+#    #+#                 */
/*   Updated: 2024/04/02 11:57:14 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**arg_parser(int argc, char *argv[])
{
	char	**parsed;

	parsed = NULL;
	if (argc == 2 && ft_strchr(argv[1], ' '))
	{
		parsed = ft_split(argv[1], ' ');
		return (parsed);
	}
	if (argc >= 2)
		return (&argv[1]);
	return (0);
}
