/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 16:32:04 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/28 14:20:51 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (0);
}

// int	main(void)
// {
// 	const char	*string1 = "tripouille";
// 	int			c = '\0';

// 	printf("%s\n", ft_strchr(string1, c));
// 	printf("%s\n", strchr(string1, c));
// 	return (0);
// }
