/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:39:19 by sramos        #+#    #+#                 */
/*   Updated: 2024/03/11 18:41:41 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int i)
{
	return (i >= '0' && i <= '9');
}

// int	main(void)
// {
// 	char	*string;

// 	string = "456";
// 	printf("%i", ft_isdigit(*string));
// 	printf("\n%i", isdigit(*string));
// 	return (0);
// }
