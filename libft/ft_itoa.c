/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 11:14:20 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/26 12:21:15 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_count(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			count;
	char		*str;
	long int	num;

	num = n;
	count = ft_count(n);
	if (n < 0)
	{
		num *= -1;
		count++;
	}
	if (n == 0)
		count = 1;
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count--)
	{
		str[count] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 0;
// 	str = ft_itoa(n);
// 	printf("This is the output string: %s.\n", str);
// 	return (0);
// }
