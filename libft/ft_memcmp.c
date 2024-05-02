/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 11:00:13 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 12:47:50 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = s1;
	us2 = s2;
	i = 0;
	while (i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "abc\0fhgf";
// 	char *s2 = "abc\0fhgfh";
// 	printf("%i\n", memcmp(s1, s2, 9));
// 	printf("%i", ft_memcmp(s1, s2, 9));
// 	return (0);
// }
