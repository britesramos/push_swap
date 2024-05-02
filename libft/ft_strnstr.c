/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 14:20:52 by sramos        #+#    #+#                 */
/*   Updated: 2023/10/20 17:49:58 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (ft_strlen(little) > len - i)
			break ;
		if (!(ft_strncmp(&big[i], &little[j], ft_strlen(little))))
			return ((char *) & big[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*string1 = "Hello World!";
// 	const char	*string2 = "";

// 	printf("%s\n", strnstr(string1, string2, -1));
// 	printf("%s\n", ft_strnstr(string1, string2, -1));
// 	return (0);
// }
