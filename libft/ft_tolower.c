/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 17:05:59 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/13 11:09:51 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = '?';
// 	printf("%c in lowercase is %c\n", c, tolower(c));
// 	printf("%c in lowercase is %c", c, ft_tolower(c));
// 	return (0);
// }
