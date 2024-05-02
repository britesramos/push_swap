/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 16:18:07 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:51:42 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	string1[] = "";
// 	char	string2[] = "";
// 	char	string3[] = "";
// 	char	string4[] = "";

// 	printf("String 1 before    memcpy: %s\n", string1);
// 	printf("String 3 before ft_memcpy: %s\n", string3);
// 	memcpy(string1, string2, 1);
// 	ft_memcpy(string3, string4, 1);
// 	printf("String 1 after    memcpy: %s\n", string1);
// 	printf("String 3 after ft_memcpy: %s\n", string3);
// 	return (0);
// }
