/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 17:03:46 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:30:26 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			res = res * 10 + nptr[i] - '0';
			i++;
		}
		return (res * sign);
	}
	return (0);
}

// int	main(void)
// {
// 	const char *string = "       \007     -5635   342eter34";
//     // char escape[] = {9, 10, 11, 12, 13, 0};
// 	printf("%i\n",atoi(string));
// 	printf("%i\n",ft_atoi(string));
// 	return (0);
// }
