/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:46:43 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:39:48 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}

// int	main(void)
// {
// 	int	str;

// 	str = 42;
// 	printf("%i\n", ft_isalnum(str));
// 	printf("%i\n", isalnum(str));
// 	return (0);
// }
