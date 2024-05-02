/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:53:22 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:41:35 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0x80;
// 	printf("%i", ft_isascii(i));
// 	printf("\n%i", isascii(i));
// 	return (0);
// }
