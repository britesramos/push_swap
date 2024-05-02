/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:05:48 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:39:17 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalpha(int i)
{
	return ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'));
}

// int	main(void)
// {
// 	char	*string;

// 	string = "a";
// 	printf("%i", ft_isalpha(*string));
// 	printf("\n%i", isalpha(*string));
// 	return (0);
// }
