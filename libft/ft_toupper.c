/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 16:51:20 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/13 11:09:54 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'B';
// 	printf("%c in uppercase is represented as %c\n", c, toupper(c));
// 	printf("%c in uppercase is represented as %c", c, ft_toupper(c));
// 	return (0);
// }
