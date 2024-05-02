/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 14:10:01 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/27 11:18:03 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*m;
	size_t			i;

	m = s;
	i = 0;
	while (n--)
	{
		m[i] = c;
		i++;
	}
	return (m);
}

// int	main(void)
// {
// 	char	string[] = "jjjjjjjjjjjjjjj";
// 	char	string1[] = "jjjjjjjjjjjjjjj";
// 	memset(string, 'c', 5);
// 	printf("%s\n", string);
// 	ft_memset(string1, 'c', 5);
// 	printf("%s\n", string1);
// 	return (0);
// }
